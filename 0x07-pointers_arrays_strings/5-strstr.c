#include "main.h"
#include <stdio.h>
/**
 * _strstr - function locates the first occurance of the string needle
 * in haystack string
 * @needle : a pointer in the array to search for
 * @haystack: a pointer for the array to search in
 * Return: returning a pointer to the matching string if there is a match
 */
char *_strstr(char *haystack, char *needle)
{
	char *location;
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			location = haystack + i;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (needle[j] != haystack[i + j] || *haystack == '\0')
				{
					break;
				}
			}
			return (location);
		}
	}
	return (0);
}
