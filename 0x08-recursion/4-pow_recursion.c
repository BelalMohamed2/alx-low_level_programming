#include "main.h"
/**
 * _pow_recursion - fuction that is used to calucluate
 * the power of x using refrence y
 * @x: the base of the number
 * @y: the power of the number
 * Return: the value of the base x to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
