#include "main.h"
/**
 * set_bit - function to set the value of a certain bit with 1
 * @n: the pointer the integer value
 * @index: the index of the needed bit index
 * Return : the status of the operation
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
