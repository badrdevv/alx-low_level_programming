#include "main.h"
/**
 * _memcpy - a function that copies memories areas
 * @dest: memory's stored
 * @src: memory's copied
 * @n: number of byte
 *
 * Return: a point to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
