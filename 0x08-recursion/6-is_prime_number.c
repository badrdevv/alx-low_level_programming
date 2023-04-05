#include "main.h"

int true_prime(int n, int b);

/**
 * is_prime_number - a function that tells if a integer is
 * a prime number or not
 * @n: the number that we will evaluate
 *
 * Return: 1 in case n is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (true_prime(n, n - 1));
}

/**
 * true_prime - a function that calculate if a
 * number is prime in a recursive way
 * @n: the number that we will evaluate
 * @b: the iterator
 *
 * Return: 1 in case n is prime, 0 if not
 */

int true_prime(int n, int b)
{
	if (b == 1)
		return (1);
	if (n % b == 0 && b > 0)
		return (0);

	return (true_prime(n, b - 1));
}
