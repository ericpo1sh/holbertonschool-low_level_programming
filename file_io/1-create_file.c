#include "main.h"
/**
 * create_file - creates a new file ands text into it.
 * @filename : name of the file
 * @text_content : null terminated string
 * Return: -1 if failed. 1 if sucess
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int i, write_result = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	while (text_content && text_content[i])
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



