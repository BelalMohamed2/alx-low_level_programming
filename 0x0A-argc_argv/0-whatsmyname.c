#include <stdio.h>
/**
 * main - function to print the name of the program
 * @argc: the number of inputs
 * @argv: the argument vector
 * Return: Always success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
