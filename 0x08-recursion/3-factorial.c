#include "main.h"

/**
 * factorial - my function inside this file
 * @n: the integer number given by user
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
