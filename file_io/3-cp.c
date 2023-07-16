#include "main.h"
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

	frum = open(argv[1], O_RDONLY);
	if (frum == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to1 = open(argv[2], O_CREAT | O_WRONLY | TRUNC, 0664);
	read1 = read(frum, buff, BUFSIZ);
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
