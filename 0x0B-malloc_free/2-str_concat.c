#include "main.h"
#include <stdlib.h>
/**
 * get_len - function to get the length of the string
 * @strptr: the input string
 * Return: the length of the string
 */
int get_len(char *strptr)
{
	int size;

	while (strptr[size] != '\0')
	{
		size++;
	}
	return (size);
}
/**
 * str_concat -  function returns a pointer to a newly allocated space in memory
 * @s1: a pointer to a string
 * @s2: a pointer to a string
 * Return: NULL if str = NULL or returns a pointer to the duplicated string
 */
char *str_concat(char *s1, char *s2)
{
	int size = 0, i = 0;
	int len1 = 0, len2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = get_len(s1);
	len2 = get_len(s2);
	size = len1 + len2;
	ptr = malloc((size * sizeof(char)) + 1);
	if (!ptr)
		return (NULL);
	for (; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (; i < (len1 + len2); i++)
	{
		ptr[i] = s2[i - len1];
	}
	ptr[i] = '\0';
	return (ptr);
}
