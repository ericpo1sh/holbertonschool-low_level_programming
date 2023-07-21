#include "hash_tables.h"
/**
 * key_index - gets the key for the index
 * @key : key
 * @size : size of the array
 * Return: Out
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;
	unsigned long int out;

	i = hash_djb2(key);
	out = i % size;
	return (out);
}
