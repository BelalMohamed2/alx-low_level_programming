#include "main.h"
/**
 * _memcpy - function to copy the first n of meomery
 * that pointed by pointer src to the pointer dest pointer
 * @n: number of integers to be looped over
 * @src: a pointer to a memory location where we take the data from
 * @dest: a pointer to a destination of the out put memory
 * Return: dest as a pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
