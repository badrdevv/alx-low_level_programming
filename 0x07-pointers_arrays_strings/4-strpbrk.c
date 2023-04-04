#include "main.h"

/**
 * _strpbrk - My function in this file
 * @s: an input
 * @accept: another input from the user
 *
 * Return: 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}

	return ('\0');
}
