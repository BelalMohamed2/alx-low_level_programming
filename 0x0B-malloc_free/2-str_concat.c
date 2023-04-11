#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  function returns a pointer to a
 * newly allocated space in memory
 * @s1: a pointer to a string
 * @s2: a pointer to a string
 * Return: NULL if str = NULL or returns a pointer to the duplicated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int s1_len = 0, s2_len = 0;
	int i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	size = s1_len + s2_len;
	concat = malloc(sizeof(char) * (size + 1));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		concat[i] = s1[i];
	for (j = 0; i < size && j < s2_len; i++, j++)
		concat[i] = s2[j];
	concat[i] = '\0';

	return (concat);
}
