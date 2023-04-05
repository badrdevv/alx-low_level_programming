#include "main.h"

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number
 * @n: the number to calculate the square root
 *
 * Return: the result of square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (true_sqrt_recursion(n, 0));
}

/**
 * true_sqrt_recursion - this function is used to recurse to
 * find the natural square root of a number
 * @n: the number to calculate the square root
 * @b: the iterator used in this function
 *
 * Return: the result of square root
 */

int true_sqrt_recursion(int n, int b)
{
	if (b * b > n)
		return (-1);
	if (b * b == n)
		return (b);

	return (true_sqrt_recursion(n, b + 1));
}
