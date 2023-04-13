#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of intgers
 * @min: first input
 * @max: second input
 * Return: Null if min bigger than max or not enough space
 */
int *array_range(int min, int max)
{
	int *ptr, i;
	int j = 0;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
