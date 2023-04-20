#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function that print its opcodes
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int by, a;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	by = atoi(argv[1]);

	if (by < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (a = 0; a < by; a++)
	{
		if (a == by - 1)
		{
			printf("%02hhx\n", ar[a]);
			break;
		}
		printf("%02hhx ", ar[a]);
	}
	return (0);
}
