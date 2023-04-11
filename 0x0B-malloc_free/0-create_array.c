#include "main.h"
#include <stdlib.h>
/**
 * create_array - function used to create an array
 * @size: the size of the array
 * @c: charater used as an intialization of the string
 * Return: NULL if size is 0 and a pointer to array if not
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}

