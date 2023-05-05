#include "main.h"

/**
 * clear_bit - a function that set the value of
 * a given bit to 0
 * @n: the pointer to the number to change
 * @index: the index of the bit to clear
 *
 * Return: 1 for success, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
