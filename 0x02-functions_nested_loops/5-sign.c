#include "main.h"

/**
 * print_sign - a function that check whether a number
 * is positive or negative or equal to 0
 * @n: the compared number
 *
 * Return: 1 if n is positive, -1 if n is negative, 0 if n equal to 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
