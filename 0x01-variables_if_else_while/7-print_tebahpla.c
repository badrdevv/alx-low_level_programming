#include <stdio.h>

/**
 * main - my main function
 *
 * Return: Always 0
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
