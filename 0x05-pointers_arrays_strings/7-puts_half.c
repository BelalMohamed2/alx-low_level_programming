#include "main.h"
/**
 * puts_half - function for printing the half of the string
 * @str: is the input string of the function
 */
void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (1)
	{
		if (str[i] == '\0')
		{
			break;
		}
		i++;
	}
	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = (i - 1) / 2;
	}
	for (; j <= i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
