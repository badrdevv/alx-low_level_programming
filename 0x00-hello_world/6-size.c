#include <stdio.h>

/**
 * main - my main function that determine the size of each variable type
 *
 * Return: Always 0
 */

int main(void)
{
	char i;
	int j;
	long int k;
	long long int l;
	float m;
	printf("Size of a char: %lu byte(s)\n", sizeof(i));
	printf("Size of a char: %lu byte(s)\n", sizeof(j));
	printf("Size of a char: %lu byte(s)\n", sizeof(k));
	printf("Size of a char: %lu byte(s)\n", sizeof(l));
	printf("Size of a char: %lu byte(s)\n", sizeof(m));
	return (0);
}
