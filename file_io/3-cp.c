#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int from1 = 0;
	int to1 = 0;
	int read1 = 0;
	int write1 = 0;
	int close1, close2 = 0;
	char buff[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp from_file file_to\n");
		exit(97);
	}

	from1 = open(argv[1], O_RDONLY);
	if (from1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	read1 = read(from1, buff, BUFSIZ);
	write1 = write(to1, buff, read1);
	
	if (to1 == -1 || write1 != read1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	if (read1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	close1 = close(from1);
	close2 = close(to1);

	if (close1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from1);
		exit(100);
	}
	if (close2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to1);
		exit(100);
	}
	return (0);
}
