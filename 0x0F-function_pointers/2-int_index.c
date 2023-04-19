#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - function that searches for an integer.
 * @array: the input array to search the number in
 * @size: the size of the array
 * @cmp: a pointer to a function
 * Return: the index of the intger if found and -1 if not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
