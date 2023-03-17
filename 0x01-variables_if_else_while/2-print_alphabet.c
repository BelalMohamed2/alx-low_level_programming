#include <stdio.h>
/**
 * main - function for printing alphabet
 * Return: Alwayas (Success)
 */
int main(void)
{
int count = 97;
for (; count <= 122; count++)
{
putchar(count);
}
putchar('\n');
return (0);
}
