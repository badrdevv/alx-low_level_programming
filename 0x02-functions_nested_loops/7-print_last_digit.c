#include "main.h"

/**
 * print_last_digit - a function that print the last digit
 * of a number
 * @n: the number that we want to get the last digit from
 *
 * Return: n%10 which is the last digit of a number
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar(last_digit + '0');

	return (last_digit);
}
