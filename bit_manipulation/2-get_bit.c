#include "main.h"
/**
 * get_bit - returns value of a bit at the index
 * @n : current num
 * @index : index for the binary
 * Return: the bit of the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = n >> index;

	return (val & 1);
}
