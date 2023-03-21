#include "main.h"
/**
 * print_last_digit - it describe it self
 * @i: the input to print it last digit
 * Return: the last digit of the number
 */
int print_last_digit(int i)
{
int lastdg;

lastdg = i % 10;
if (lastdg < 0)
{
_putchar (-lastdg + 48);
return (-lastdg);
}
else
{
_putchar (lastdg + 48);
return (lastdg);
}
}
