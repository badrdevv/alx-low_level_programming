#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that print each
 * array element on a newl
 * @array: an array
 * @size: how many elements to print
 * @action: a pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
