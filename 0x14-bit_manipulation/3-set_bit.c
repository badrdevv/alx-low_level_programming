#include "main.h"

/**
 * set_bit - a function that set a bit
 * at a given index to 1
 * @n: the pointer to the number that will be changed
 * @index: the index of the bit that will be set to 1
 *
 * Return: 1 for success, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
