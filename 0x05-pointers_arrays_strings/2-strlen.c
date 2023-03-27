#include "main.h"
/**
 * _strlen - function to return the length of the string
 * @s: is a pointer of a character
 * Return: the number of characters
 */
int _strlen(char *s)
{
	int i = 0;

	while (1)
	{
		if (*(s + i) == '\0')
		{
			break;
		}
		else
		{
			i++;
		}
	}
	return (i);
}
