#include "shell.h"
char **lsh_split_line(char *line);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int pedircomando(char **env);
char *findcom(char *str,char **env);
char *find_path(char **env);
char *str_concat(char *s1, char *s2);
int _strlen(char *s);
int findbuilt_in(char **argv);
void fexit(char **argv);
/**
 * main - simple command interpreter
 * Return: 0;
 */
int main(int ac, char **av, char **env)
{
        (void)ac;
        (void)av;
        while (1)
        {
                write(1, "<3 ", 3);
                pedircomando(env);
        }
        return (0);
}
/**
 * pedircomando - ask command
 */
int pedircomando(char **env)
{
        size_t buffsize = 0;
        int len;
        char *buffer = NULL, **argv, *path;
        pid_t child_pid;
        int status;
        len = getline(&buffer, &buffsize, stdin);
        if (len == -1)
        {
                if (len == EOF)
                {
                        return (0);
                }
                perror("");
        }
        buffer[len - 1] = '\0';
        argv = lsh_split_line(buffer);
        if (findbuilt_in(argv) == 1)
        {
                path = findcom(argv[0], env);
                child_pid = fork();
                if (child_pid == -1)
                {
                        perror("Error:");
                }
                if (child_pid == 0)
                {
                        if (execve(argv[0], argv, env) == -1)
                        {
                                if (execve(path, argv, env) == -1)
                                {
                                        perror("Error:");
                                        exit(0);
                                }
                        }
                }
                else
                {
                        wait(&status);
                }
        }
        return (1);
}
char **lsh_split_line(char *line)
{
        unsigned int bufsize = 64, i = 0;
        char **tokens = malloc(bufsize * sizeof(char*));
        char *token;
        if (!tokens)
        {
                perror("Error: ");
                return (NULL);
        }
        token = strtok(line, " ");
        while (token != NULL)
        {
                tokens[i] = token;
                i++;
                if (i >= bufsize)
                {
                        bufsize += 64;
                        tokens = _realloc(tokens, (bufsize - 64) * sizeof(char*), bufsize * sizeof(char*));
                        if (!tokens)
                        {
                                perror("Error");
                                return (NULL);
                        }
                }
                token = strtok(NULL, " ");
        }
        tokens[i] = NULL;
        return (tokens);
}
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
        if (old_size == new_size)
        {
                return (ptr);
        }
        if (new_size == 0 && ptr != NULL)
        {
                free(ptr);
                return (NULL);
        }
        if (new_size < old_size)
        {
                free(ptr);
        }
        free(ptr);
        ptr = malloc(new_size);
        return (ptr);
}
char *findcom(char *str,char **env)
{
        int res;
        char *cat = NULL, *barra = "/";
        char *tkn;
        char *path;
        struct stat st;
        path = find_path(env);
        tkn = strtok(path, ":");
        while (tkn != NULL)
        {
                tkn = str_concat(tkn, barra);
                cat = str_concat(tkn, str);
                res = stat(cat, &st);
                if (res == 0)
                {
                        return (cat);
                }
                tkn = strtok(NULL, ":");
        }
        free(tkn);
        return (NULL);
}
/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to str.
 */
char *str_concat(char *s1, char *s2)
{
        char *str;
        int a, b, size1, size2;
        if (s1 == NULL)
        {
                s1 = "";
        }
        if (s2 == NULL)
        {
                s2 = "";
        }
        for (size1 = 0; *(s1 + size1) != '\0'; size1++)
        {
        }
        for (size2 = 0; *(s2 + size2) != '\0'; size2++)
        {
        }
        str = (char *)malloc(sizeof(char) * (size1 + size2) + 1);
        if (str == NULL)
        {
                return (NULL);
        }
        for (a = 0; a < size1; a++)
        {
                *(str + a) = *(s1 + a);
        }
        for (b = 0; b <= (size2); b++, a++)
        {
                *(str + a) = *(s2 + b);
        }
        return (str);
}
char *find_path(char **env)
{
        char *path = "PATH=";
        char *tmp;
        int i, j;
        for (i = 0; env[i] != NULL; i++)
        {
                for (j = 0; j < 5; j++)
                {
                        if (path[j] != env[i][j])
                                break;
                }
                if (j == 5)
                        break;
        }
        tmp = malloc(strlen(env[i]) + 1);
        if (tmp != NULL)
        {
                tmp = strcpy(tmp, env[i]);
                return (tmp);
        }
        return (NULL);
}
int findbuilt_in(char **argv)
{
        int comp, i = 0;
        built_in functions[] = {
                {"exit", fexit},
                {NULL, NULL}
        };
        while (functions[i].name != NULL)
        {
                comp = strcmp(argv[0], functions[i].name);
                if (comp == 0)
                {
			functions[i].f(argv);
			return (0);
                }
                else
                {
                        return (1);
                }
                i++;
        }
        return (0);
}
void fexit(char **argv)
{
        (void)argv;
        exit(-1);
}
