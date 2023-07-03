#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * @argc - arguement count
 * @argv - arguement vector
 */
int main(int argc, char * argv[])
{
	char *ptr = argv[2];
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(ptr) == NULL || ptr)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*ptr == '/' || *ptr == '%') && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(ptr)(atoi(argv[1]), atoi(argv[3])));
return (0);
}
