#include <stdio.h>
/**
 * main - printing alphabet lower and upper
 * Return: Always (Success)
 */
int main(void)
{
int count = 97;
for (; count != 90; count++)
{
putchar(count);
if (count == 122)
{
count = 64;
}
}
putchar('\n');
return (0);
}
