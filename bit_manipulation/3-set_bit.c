#include "main.h"
/**
 * set_bit - resets the value of bits  to 1
 * @n : Bits
 * @index : index
 * Return: 1 if sucess, -1 if failed
 */
set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
