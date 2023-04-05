#include "main.h"
/**
 * _sqrt_recursion - function to find the square root of input value
 * @n: the input intger to the function
 * Return: the value of the square root
 */
int _sqrt_recursion(int n)
{
	return (_square_root(n, 1));
}
/**
 * _square_root - a helping function that have the recursive provalbilty
 * @n: the input intger
 * @i: the intger we recusive with
 * Return: the square root of the number
 */
int _square_root(int n, int i)
{
	if (i * i == n || n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (n);
	if (i == n / i)
	{
		return (i);
	}
	return (_square_root(n, i + 1));
}

