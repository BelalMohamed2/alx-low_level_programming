#include "3-calc.h"
/**
 * main - function that performs simple operations.
 * @argc: the argument count
 * @argv: the argumen vector
 * Return: 0 if success and other if fail
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char operator;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	fun = get_op_func(argv[2]);

	if (!fun)
	{
		printf("Error\n");
		exit(99);
	}
	operator = *argv[2];

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = fun(num1, num2);
	printf("%d\n", result);
	return (0);
}
