#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all -  function that prints anything.
 * @format: is the format of the function
 * Return: non return value
 */
void print_all(const char * const format, ...)
{
	va_list li;
	char *data;
	int count;

	count = 0;
	va_start(li, format);
	while (format != NULL && format[count] != '\0')
	{
		switch (format[count])
		{
			case 'i':
				printf("%i", va_arg(li, int));
				break;
			case 'f':
				printf("%f", va_arg(li, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(li, int));
				break;
			case 's':
				data = va_arg(li, char *);
				if (data == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", data);
				break;
		}
				if ((format[count] == 'f' || format[count] == 'i' || format[count] == 'c' ||
		format[count] == 's') && format[(count + 1)] != '\0')
			printf(", ");
		count++;
	}
	printf("\n");
	va_end(li);
}
