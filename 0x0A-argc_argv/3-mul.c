#include <stdio.h>
#include <stdlib.h>
/**
 * main - function print the multiplication of the two arguments
 * @argc: the number of input arguments
 * @argv: the argument vector of inputs
 * Return: 0 if there are two arguments 1 if not
 */
int main(int argc, char *argv[])
{
	int f_num, s_num;

	if (argc == 3)
	{
		f_num = atoi(argv[1]);
		s_num = atoi(argv[2]);
		printf("%d\n", f_num * s_num);
		return (0);
	}
	printf("Error\n");
	return (1);
}
