#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - A function that read text file and print
 * it to STDOUT
 * @filename: a text file that will be read
 * @letters: the number of letters will be read
 * Return: the actual number of bytes read and printed
 * 0 when there are errors in function or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);

	return(w);
}
