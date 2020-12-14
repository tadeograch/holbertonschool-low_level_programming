#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char cba = 'z';
while (cba >= 'a')
{
putchar(cba);
cba--;
}
putchar('\n');
return (0);
}
