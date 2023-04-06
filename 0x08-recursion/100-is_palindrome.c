#include "main.h"
/**
 * _strlen - function to calculate the length using recursion
 * @s: a pointer to a string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}
/**
 * testing - function to test string if it palindrome
 * @s: a pointer to a string
 * @n: a variable that start from 0
 * @i: a variable that have the length of the string
 * Return: 1 if the string is palindrome and 0 if not
 */
int testing(char *s, int n, int i)
{
	if (s[n] != s[i])
		return (0);
	if ((i % 2 != 0) || (n == i))
		return (1);
	if ((i % 2 == 0) || ((n + 1) == i))
		return (1);
	return (0 + testing(s, n + 1, i - 1));
}
/**
 * is_palindrome - is the word that prounounced the same way
 * @s: a pointer to a string
 * Return: 1 if the string is palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int i, n;

	n = 0;
	i = _strlen(s);

	return (testing(s, n, i));
}
