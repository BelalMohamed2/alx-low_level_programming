#include <stdio.h>
/**
 * main - printing alphabet except some letters
 * Return: Always (Success)
 */
int main(void)
{
int count = 97;
for (; count <= 122; count++)
{
if (count != 'e' && count != 'q')
{
putchar(count);
}
}
putchar('\n');
return (0);
}
