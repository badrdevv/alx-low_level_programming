#include "main.h"
#include <stdlib.h>

/**
 * *array_range - a function that create an
 * array of integers
 * @min: the minimum range of values stored
 * @max: the maximum range of values stored and the
 * number of elements
 *
 * Return: it returns a pointer to a new array
 */

int *array_range(int min, int max)
{
	int *h;
	int a, si;

	if (min > max)
		return (NULL);

	si = max - min + 1;

	h = malloc(sizeof(int) * si);

	if (h == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		h[a] = min++;

	return (h);
}
