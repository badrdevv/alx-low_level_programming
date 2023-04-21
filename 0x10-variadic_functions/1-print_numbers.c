#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that print numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers that were passed to the function.
 * @...: A variable number of numbers to be printed.
 *
 * Return: void
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(list);
}
