#include "main.h"
/**
 * flip_bits -  returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first integer
 * @m: second integer
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int z = 0;
	unsigned int count = 0;

	z = n ^ m;
	while (z > 0)
	{
		if (z & 1)
			count++;
		z = z >> 1;
	}
	return (count);
}
