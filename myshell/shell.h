#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
char **lsh_split_line(char *line);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int pedircomando(char **env);
char *findcom(char *str, char **env);
char *str_concat(char *s1, char *s2);
char *find_path(char **env);

typedef struct built_in_s
{
	char *name;
	void (*f)();
	void (*x)(char *argv);
}built_in;
int find_built_in(char **argv);
#endif
