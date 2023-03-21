#include "main.h"
/**
 * _islower - for finding if the it is lower case char
 * @c: the character as int
 * Return: 1 for lowercase  and 0 for the rest
 */
int _islower(int c)
{
if (c >= 97 || c <= 122)
{
	return (1);
}
else
{
	return (0);
}
