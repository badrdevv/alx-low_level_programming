#include "function_pointers.h"

/**
 * int_index - a function that return an index place
 * if the comparison = true, otherwise -1
 * @array: an array
 * @size: size of the elements in an array
 * @cmp: a pointer
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]))
			return (b);
	}
	return (-1);
}
