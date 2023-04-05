#include "main.h"
/**
 * factorial - function that returns the factorial of the function
 * @n: the input intger of the function
 * Return: the value of the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
