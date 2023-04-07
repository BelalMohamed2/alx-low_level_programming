#include "main.h"
/**
 * _strpbrk - function locates the first occurance of the string s in accept
 * @s: a pointer in the array to search for
 * @accept: a pointer for the array to search in
 * Return: returning a pointer to the matching string if there is a match
 */
char *_strpbrk(char *s, char *accept)
{
	char *location;
	int i, j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		if accept[i] == s[0]
		{
			location = accept + i;
			for (j = 0; s[j] != '\0'; j++)
			{
				if s[j] != accept[i + j]
				{
					return (0);
				}
			}
			return (location);
		}
	}
	return (0);
}
