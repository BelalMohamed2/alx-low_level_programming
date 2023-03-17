#include <stdio.h>
/**
 * main - printing nums sperating by comma
 * Return: Always (Success)
 */
int main(void)
{
int count = 48;
for (; count <= 57; count++)
{
putchar(count);
if (count  != 57)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
return (0);
}
