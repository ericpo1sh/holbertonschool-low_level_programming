#include "hash_tables.h"
/**
 * hash_table_get - gets the value associated with key 
 * @ht : hash table
 * @key : key
 * Return: NULL if failed, value at key if success.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = (hash_djb2((const unsigned char *)key)) % (ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	for (temp = ht->array[index]; temp != NULL; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
	}
	return (NULL);
}
