#include <stdio.h>

/**
 * _islower - a function that detect lowercase characters
 * @c: the alphabet character
 *
 * Return: 1 if the character is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
