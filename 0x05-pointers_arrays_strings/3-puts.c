#include "main.h"
/**
 * _puts - function that prints the string
 * @str: a character pointer that points to the first location of the array
 * Return: no returned values
 */
void _puts(char *str)
{
	int i = 0;

	while (1)
	{
		if (*(str + i) == '\0')
		{
			break;
		}
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
