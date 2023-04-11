#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to a newly allocated space in memory
 * @str: a pointer to a string
 * Return: NULL if str = NULL or returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *ptr;
	char *var;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
	{
		size++;
	}
	ptr = malloc((size) * sizeof(char));
	if (!ptr)
		return (NULL);
	for (; i < size; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	var = ptr;
	free(ptr);
	return (var);
}

