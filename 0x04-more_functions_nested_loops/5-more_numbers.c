#include "main.h"
/**
 * more_numbers - print numbers form zero to 14 ten times
 * Return: printing the nums
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j / 10 != 0)
			{
				if ((j % 10) == 4)
				{
					break;
				}
				else
				{
					_putchar((j / 10) + '0');
				}
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
