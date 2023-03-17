#include <stdio.h>

/**
 * main - my main function
 *
 * Return: Always 0
 */

int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		putchar(b + '0');
	}
	putchar('\n');

	return (0);
}
