#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - a function that concatenate n bytes
 * of a string to another string
 * @s1: the string that will be appended to
 * @s2: the string that will be concatenated from
 * @n: the number of bytes from s2 for the concatenation to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *b;
	unsigned int a = 0, c = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < len2)
		b = malloc(sizeof(char) * (l1 + n + 1));
	else
		b = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!b)
		return (NULL);

	while (a < len1)
	{
		b[a] = s1[a];
		a++;
	}

	while (n < l2 && a < (l1 + n))
		b[a++] = s2[c++];

	while (n >= l2 && a < (l1 + l2))
		b[a++] = s2[c++];

	b[a] = '\0';

	return (b);
}
