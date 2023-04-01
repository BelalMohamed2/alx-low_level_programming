#include "main.h"
/**
 *rot13 - encodes strings using rot13 by moving with 13 char.
 *@s: pointer to string.
 *
 *Return: pointer to encoded string.
 */
char *rot13(char *s)
{
	int stringCount, rotat;
	char r1[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		     'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		     'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		     'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		     'Z'};
	char r2[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		     'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		     'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		     'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		     'M'};

	for (stringCount = 0; s[stringCount] != '\0'; stringCount++)
	{
		for (rotat = 0; rotat < 53; rotat++)
		{
			if (r1[rotat] == s[stringCount])
			{
				s[stringCount] = r2[rotat];
				break;
			}
		}
	}
	return (s);
}
