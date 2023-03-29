#include "main.h"
/**
 * _strcat - function used to concate two strings
 * @src: the first string
 * @dest: is the destination array pointer
 * Return: the return is an array pointer of the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i;

	while (1)
	{
		if (*(dest + dest_len) == '\0')
		{
			break;
		}
		dest_len++;
	}
	for (i = dest_len + 1; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src - (i - dest_len + 1));
	}
	retun (dest);
}
