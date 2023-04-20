#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -  function that returns the sum of all its parameters.
 * @n: the count of the inputs
 * Return: the suma and 0 if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i = 0;
	int sum = 0;

	va_start(num, n);
	if (n == 0)
		return (0);
	for (; i < n; i++)
	{
		sum += va_arg(num, int);
	}
	va_end(num);
	return (sum);
}
