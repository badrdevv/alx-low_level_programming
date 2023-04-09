#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - my main function
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: 0 if there is a result returned, 1 if the program
 * does not receive two arguments
 */

int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
