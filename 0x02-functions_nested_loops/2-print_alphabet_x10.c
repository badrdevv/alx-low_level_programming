#include "main.h"

/**
 * print_alphabet_x10 - my function that prints
 * the whole alphabets x10 times in a row
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int p;

	for (p = 0; p <= 10; p++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);

		_putchar('\n');
	}
}
