#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *s1 = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s1, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", s1, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", s1, va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", s1, s);
					break;
				default:
					i++;
					continue;
			}
			s1 = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
