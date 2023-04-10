#include "main.h"
/**
 * _strchr - function used to locate a character inside a string
 * @c: character where we search for
 * @s: a pointer to an array of strings
 * Return: loctaion if founded and 0 if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (c == '\0')
		return (&s[i]);
	return ('\0');
}
