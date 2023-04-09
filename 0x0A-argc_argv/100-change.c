#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if number is negative or if the program executed correctly
 * 1 if the number of arguments passed is not exactly 1
 */

int main(int argc, char *argv[])
{
	int number, k, results;
	int coins[] __attribute__((unused)) = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	results = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	for (k = 0; k < 5 && number >= 0; k++)
	{
		while (number >= coins[k])
		{
			results++;
			number -= coins[k];
		}
	}

	printf("%d\n", results);
	return (0);
}
