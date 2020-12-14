#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 48;
char abc = 'a';
while (num < 58)
{
putchar(num);
num++;
}
while (abc <= 'f')
{
putchar(abc);
abc++;
}
putchar('\n');
return (0);
}
