#include "main.h"
/**
 * get_bit - function used to get the value of the bit
 * @n: the input unsigned integer
 * @index: the index of the wanted bit
 * Return: the value of the wantd bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n & (1 << index)) >> index);
}
