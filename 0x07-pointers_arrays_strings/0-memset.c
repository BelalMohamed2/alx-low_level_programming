#include "main.h"
/**
 * _memset - function to fill the first n of meomery
 * that pointed by pointer s with value equal b
 * @n: number of integers to be looped over
 * @s: a pointer to a memory location
 * @b: the constant that used to fill the memory with
 * Return: s as pointer to a new string
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
