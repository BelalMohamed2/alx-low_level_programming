#include <stdio.h>
/**
 * main - function for printing alphabet
 * Return: Alwayas (Success)
 */
int main(void)
{
int count = 122;
for (; count >= 97; count--)
{
putchar(count);
}
putchar('\n');
return (0);
}
