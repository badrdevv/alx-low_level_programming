#include "main.h"

/**
 * _abs - a function that computes the absolute value
 * of an integer
 * @n: the integer number
 *
 * Return: -int if int is negative, otherwise int is returned
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
