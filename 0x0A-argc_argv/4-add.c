#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that is used for adding positive numbers
 * @argc: the number of input arguments
 * @argv: the argument vector
 * Return: 0 if the summation without any letters shown and if there is letter
 */
int main(int argc, char *argv[])
{
	int sum = 0, i = 1, var;

	if (argc > 1)
	{
		for (; i < argc; i++)
		{
			if ((*argv[i])  >= '0' && (*argv[i]) <= '9')
			{
				var = atoi(argv[i]);
				sum += var;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
