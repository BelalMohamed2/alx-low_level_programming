#include "main.h"
/**
 * string_toupper - function to transger lowercase into upper case
 * @str: input string pointer to char
 * return: array to char that points to the upperd case string
 */
char *string_toupper(char *str)
{
	int counter = 0;
	int i = 0;

	while (str[counter])
	{
		counter++;
	}
	for (; str[i]; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	return (str);
}
