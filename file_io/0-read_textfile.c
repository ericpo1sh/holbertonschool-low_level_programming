STDOUT_FILENO#include "main.h"
/**
 * read_textfile - reads a text file and copies txt into stdout
 * @filename : the filename given to us
 * @letters : the size of the buffer
 * Return: 0 if failed, new if passed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t red, new;
	char *bufR;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bufR = malloc(sizeof(char) * (letters));

	if (bufR == NULL)
		return (0);

	red = read(fd, bufR, letters);
	new = write(STDOUT_FILENO, bufR, red);

	close(fd);
	free(bufR);

	return (new);
}

