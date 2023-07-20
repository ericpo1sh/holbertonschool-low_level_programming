#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n : number to be set to 0
 * @index : index
 * Return: 1 if success, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}