#include "main.h"

/**
 * more_numbers - a function that prints 10 times
 * the numbers from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, m;

	for (i = 0; i <= 9; i++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m >= 10)
				_putchar('1');
			_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}
