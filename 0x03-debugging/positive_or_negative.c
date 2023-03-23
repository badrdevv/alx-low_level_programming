#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - a function to checker the sign of a number
 * @i: the integer number
 *
 * Return: nothing to be returned
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
