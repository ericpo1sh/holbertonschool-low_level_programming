#include "hash_tables.h"
/**
 *
 *
 *
 *
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *add = NULL;
	hash_node_t *temp = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = (hash_djb2((const unsigned char *)key)) % (ht->size);

	for (temp = ht->array[index]; temp != NULL; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
	}
	add = malloc(sizeof(hash_node_t));
	if (add == NULL)
	return (0);

	add->key = strdup(key);
	add->value = strdup(value);
	add->next = ht->array[index];
	ht->array[index] = add;

	return (1);
}

