#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to print the argc and argv
 * @argc: the number of input arguments
 * @argv: the argument vector
 * Return: alway return success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	printf("arguments numbers= %d\n", argc);
	if (argc > 1)
	{
		for (; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
