#include "main.h"

/**
 * print_alphabet - a function to print
 * all alphabets from a to z
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
