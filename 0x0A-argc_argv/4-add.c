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
	int num, i, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (i = 0; argv[num][i]; i++)
		{
			if (argv[num][i] < '0' || argv[num][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
