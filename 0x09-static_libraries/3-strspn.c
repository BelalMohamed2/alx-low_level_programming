#include "main.h"
/**
 * _strspn - Returns the number of bytes in the initial segment of s
 * @accept: a pointer to a test string
 * @s: a pointer to the main string
 * Return: the length of file accept in the prefix in the s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int j = 0, i = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				a++;
			j++;
		}
		i++;
		j = 0;
	}
	return (a);
}
