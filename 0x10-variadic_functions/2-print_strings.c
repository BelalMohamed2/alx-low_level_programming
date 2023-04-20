#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the character between numbers
 * @n: the number of input strings
 * Return: no returned value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list li;
	unsigned int count;

	va_start(li, n);
	for (count = 0; count < n; count++)
	{
		char *s;

		s = va_arg(li, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && (count + 1) != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(li);
}
