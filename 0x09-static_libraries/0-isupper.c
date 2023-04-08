#include "main.h"

/**
 * _isupper - a function that checks if a integer is uppercase or no
 * @c: Integer
 *
 * Return: 1 if c is uppercase, otherwise 0 is returned
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
