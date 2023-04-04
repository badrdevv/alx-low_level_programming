#include "main.h"

/**
 * _strchr - the main function of this file
 * @s: input of user
 * @c: another input
 *
 * Return: 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
