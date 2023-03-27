#include "main.h"
/**
 * rev_string - reverse a string.
 *@s: the string to be reversed.
 */
void rev_string(char *s)
{
	int length, m, i;
	char c1, c2;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	m = length - 1;
	i = 0;

	while (m > i)
	{
		c1 = s[i];
		c2 = s[m];
		s[i] = c2;
		s[m] = c1;
		m--;
		i++;
	}
}
