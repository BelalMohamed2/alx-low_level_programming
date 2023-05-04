#include "main.h"
/**
 * get_endianness - Write a function that checks the endianness
 * Return: no returned value
 */
int get_endianness(void)
{
	unsigned int x = 0x01;
	char c;

	c = (char)x;
	if (c == 1)
		return (1);
	else
		return (0);
}
