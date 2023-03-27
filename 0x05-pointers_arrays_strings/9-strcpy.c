#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 * @src: is the source string
 * @dest: is the destination where to copy to
 * Return: return the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (1)
	{
		if (*(src + count) == '\0')
		{
			break;
		}
		else
		{
			dest[count] = src[count];
			count++;
		}
	}
	dest[count]= '\0';
	
	return (dest);
}
