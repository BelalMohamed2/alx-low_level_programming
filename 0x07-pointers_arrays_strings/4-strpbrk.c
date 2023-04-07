#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - function locates the first occurance of the string s in accept
 * @s: a pointer in the array to search for
 * @accept: a pointer for the array to search in
 * Return: returning a pointer to the matching string if there is a match
 */
char *_strpbrk(char *s, char *accept)
{
        int i, j;

        for (i = 0; s[i] != '\0'; i++)
        {
                        for (j = 0; accept[j] != '\0'; j++)
                        {
                                if accept[j] == s[i + j]
                                {
                                        return (s);
                                }
                        }
        }
        return (NULL);
}
