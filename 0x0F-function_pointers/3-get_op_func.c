#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - a function that select the correct function to perform
 * the operation asked by the user.
 * @s: The operator passed as argument.
 *
 * Return: An pointer to the function
 * to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int c = 0;

	while (ops[c].op != NULL && *(ops[c].op) != *s)
		c++;

	return (ops[c].f);
}
