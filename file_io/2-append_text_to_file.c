#include "main.h"
/**
 * append_text_to_file - appends text to our file
 * @filename : name of the file given to us
 * @text_content : string to append to the end of file
 * Return: -1 if failed. 1 if SUCCESS.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int fd = 0;
	int write_result = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;

	write_result = write(fd, text_content, i);

	if (write_result == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
