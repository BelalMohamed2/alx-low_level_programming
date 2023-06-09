#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned in
 * @b: a pointer to the input string
 * Return: Return: the converted number, or 0 if b is null or not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;
	int i = 0, len = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		i++;
	}
	len = --i;
	for (; b[i]; i--)
	{
		if (b[i] == '1')
			output = output | (1 << (len - i));
	}
	return (output);
}
