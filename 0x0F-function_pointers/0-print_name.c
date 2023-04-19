#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function that prints a name.
 * @name: the name that will be printed out
 * @f: a pointer to a function that that has no return value
 * Return: no return value
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
