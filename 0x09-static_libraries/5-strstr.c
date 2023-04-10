#include "main.h"
/**
 * _strstr - function locates the first occurance of the string needle
 * in haystack string
 * @needle : a pointer in the array to search for
 * @haystack: a pointer for the array to search in
 * Return: returning a pointer to the matching string if there is a match
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	for (i = 0; haystack[i]; i++)
	{
		for (k = i, j = 0; needle[j] != '\0'; j++, k++)
		{
			if (haystack[k] != needle[j] || haystack[k] == '\0')
			{
				break;
			}
		}
		if (needle[j] == 0)
		{
			return (haystack + i);
		}
	}
	return (0);
}
