#include <stdio.h>
/**
 * main - function to print the number of input arguments
 * @argc: the number of input arguments
 * @argv: the argument vector to the program
 * Return: Always success
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
