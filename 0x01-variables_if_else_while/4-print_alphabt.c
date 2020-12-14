#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char abc = 'a';
while (abc <= 'z')
{
if (abc != 'q' && abc != 'e')
{
putchar(abc);
abc++;
}
else
{
abc++;
}
}
putchar('\n');
return (0);
}
