#include <stdio.h>
/**
 * main - function for printing alphabet
 * Return: Alwayas (Success)
 */
int main(void)
{
int count = 48;
for (; count <= 102; count++)
{
if (count == 58)
{
count = 97;
}
putchar(count);
}
putchar('\n');
return (0);
}
