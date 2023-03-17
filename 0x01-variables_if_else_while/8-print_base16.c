#include <stdio.h>

/**
 * main - my main function
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	char b;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (b = 'a'; b < 'g'; b++)
	{
		putchar(b);
	}
	putchar('\n');

	return (0);
}
