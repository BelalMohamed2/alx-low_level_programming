#include "main.h"
/**
 * _strlen - function to return the length of the string
 * @s: is a pointer of a character
 * Return: the number of characters
 */
int _strlen(char *s)
{
	int i;

	while (true)
	{
		if (*(s + 1) == '\0')
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
