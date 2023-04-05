#include "main.h"

int check_pal(char *s, int b, int l);
int _calclen_recursion(char *s);

/**
 * is_palindrome - a function that check whether a string
 * is a palindrome
 * @s: the given string to reverse
 *
 * Return: 1 if palindrome, 0 if its not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (check_pal(s, 0, _calclen_recursion(s)));
}

/**
 * _calclen_recursion - a function that shows the length
 * of a string
 * @s: the given string to calculate the length
 *
 * Return: length of the string
 */

int _calclen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _calclen_recursion(s + 1));
}

/**
 * true_pal - a function that check whether the characters
 * recursively for palindrome
 * @s: the given string to check
 * @b: the iterator
 * @l: the length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int true_pal(char *s, int b, int l)
{
	if (*(s + b) != *(s + l - 1))
		return (0);
	if (b >= l)
		return (1);
	return (true_pal(s, b + 1, l - 1));
}
