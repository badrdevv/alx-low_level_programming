#include "main.h"

/**
 * _isdigit - a function that check if a number is a digit
 * @c: the integer
 *
 * Return: 1 if c is an integer, otherwise 0 is returned
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
