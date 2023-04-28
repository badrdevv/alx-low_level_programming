#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * first_function - a function that print a sentence before
 * main function is executed
 *
 * Return: void
 */

void __attribute__ ((constructor)) first_function()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
