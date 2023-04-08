#include "main.h"

/**
 * _strlen_recursion - my function in this file
 * @s: the string given by the user
 *
 * Return: String Length
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}

	return (n);
}
