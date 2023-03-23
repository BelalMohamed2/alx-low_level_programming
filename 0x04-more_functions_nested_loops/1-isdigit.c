#include "main.h"
/**
 * _isdigit - check if the input is a digit of not
 * @c: the input of the function
 * Return: 1 if the value is digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
