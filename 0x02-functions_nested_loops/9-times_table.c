#include "main.h"

/**
 * times_table - prints out the 9 times table, starting with 0
 * return: no value returned
 *
 */

void times_table(void)
{
int a, b, z, k;

for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
z = a * b;
if (z == 0 && b == 0)
_putchar(z + '0');
else if (z > 9)
{
k = z % 10;
z /= 10;
_putchar(',');
_putchar(' ');
_putchar(z + '0');
_putchar(k + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(z + '0');
}
}
_putchar('\n');
}
}
