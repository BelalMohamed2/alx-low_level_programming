#include "main.h"
/**
 * swap_int - function for swaping two variables
 * @a: first pointer
 * @b: second pointer
 * Return: no return value
 */
void swap_int(int *a, int *b)
{
	int container;

	container = *a;
	*a = *b;
	*b = container;
}
