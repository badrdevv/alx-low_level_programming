#include "main.h"

/**
 * _puts_recursion - my function of this file
 * @s: an input from the user
 *
 * Return: 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
