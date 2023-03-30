#include "main.h"
/**
 * string_toupper - function to transger lowercase into upper case
 * @str: input string pointer to char
 * return: array to char that points to the upperd case string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
