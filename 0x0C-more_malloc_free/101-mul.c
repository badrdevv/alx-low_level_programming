#include <stdlib.h>
#include "main.h"
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_it_digit - a function that check whether
 * a string contains a non-digit character
 * @a: the string that will be evaluated
 *
 * Return: it returns 0 only
 * if a non-digit is found, 1 otherwise
 */

int is_it_digit(char *a)
{
	int b = 0;

	while (a[b])
	{
		if (a[b] < '0' || a[b] > '9')
			return (0);
		b++;
	}
	return (1);
}

/**
 * _stringlength - a function that return the length of the whole string
 * @a: the string that will be evaluated
 *
 * Return: the length of the string
 */

int _stringlength(char *a)
{
	int b = 0;

	while (a[b] != '\0')
	{
		b++;
	}
	return (b);
}

/**
 * handle_errors - a function that handle errors and bugs
 * for main
 */

void handle_errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - the main function that
 * multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *a1, *a2;
	int l1, l2, l, b, cy, d1, d2, *res, h = 0;

	a1 = argv[1], a2 = argv[2];
	if (argc != 3 || !is_it_digit(a1) || !is_it_digit(a2))
		handle_errors();
	l1 = _stringlength(a1);
	l2 = _stringlength(a2);
	l = l1 + l2 + 1;
	res = malloc(sizeof(int) * l);
	if (!res)
		return (1);
	for (b = 0; b <= l1 + l2; b++)
		res[b] = 0;
	for (l1 -= 1; l1 >= 0; l1--)
	{
		d1 = a1[l1] - '0';
		cy = 0;
		for (l2 = _stringlength(a2) - 1; l2 >= 0; l2--)
		{
			d2 = a2[l2] - '0';
			cy += res[l1 + l2 + 1] + (d1 * d2);
			res[l1 + l2 + 1] = cy % 10;
			cy /= 10;
		}
		if (cy > 0)
			res[l1 + l2 + 1] += cy;
	}
	for (b = 0; b < l - 1; b++)
	{
		if (res[b])
			a = 1;
		if (h)
			_putchar(res[b] + '0');
	}
	if (!h)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
