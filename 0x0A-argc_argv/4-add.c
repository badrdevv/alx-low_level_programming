#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * checking_num - check if the string has any digit
 * @str: array of strings
 *
 * Return: Always 0 (Success)
 */

int checking_num(char *str)
{
	unsigned int counter;

	counter = 0;
	while (counter < strlen(str))
	{
		if (!isdigit(str[counter]))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}

/**
 * main - my main function
 * @argc: number of arguments
 * @argv: arrays of strings (Arguments)
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	int counter;
	int string_to_integer;
	int sum = 0;

	counter = 1;
	while (counter < argc)
	{
		if (checking_num(argv[counter]))
		{
			string_to_integer = atoi(argv[counter]);
			sum += string_to_integer;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		counter++;
	}

	printf("%d\n", sum);

	return (0);
}
