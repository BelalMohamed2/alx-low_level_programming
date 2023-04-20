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
	unsigned int flag, i;
	va_list strings;
	char *temp;

	va_start(strings, n);
	if (separator == NULL)
		flag = 1;
	if (n == 0)
		return;
	for (i = 0; i < (n - 1); i++)
	{
		temp = va_arg(strings, char *);
		if (temp != NULL)
			printf("%s", temp);
		else
			printf("(nil)");
		if (flag != 1)
			printf("%s", separator);
		else
			printf(" ");
	}
	temp = va_arg(strings, char*);
	if (temp != NULL)
		printf("%s\n", temp);
	else
		printf("(nil)\n");
	va_end(strings);
}
