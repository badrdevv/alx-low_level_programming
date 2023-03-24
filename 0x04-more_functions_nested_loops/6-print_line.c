#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: number of time the character _ should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int c;

	for (c = 0; c <= n; c++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
	}
	_putchar('\n');
}
