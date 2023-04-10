#include "main.h"
/**
 * _isalpha - to find if the input is alphabet
 * @c: input as decimal representation
 * Return: 1 if it is letter 0 if else
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
	return (1);
}
else
{
	return (0);
}
}
