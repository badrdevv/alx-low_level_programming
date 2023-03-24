#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - a function that prints all numbers from 1
 * to 100, multiples of 3 prints Fizz
 * multiples of 5 prints Buzz
 * Multiples of both 5 and 3 prints FizzBuzz
 * else print i
 *
 * Return: i
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");

	return (i);
}
