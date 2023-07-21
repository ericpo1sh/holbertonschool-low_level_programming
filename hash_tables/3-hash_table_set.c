#include "hash_tables.h"
/**
 * hash_table_set - adds an elements to the hash table
 * @ht: hash table struct
 * @key: key
 * @value: value of key
 * Return: 0 if failed, 1 if passed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *add = NULL;
	hash_node_t *head = NULL;
	unsigned long int index;

	add = malloc(sizeof(hash_node_t));

	if (add == NULL || key == NULL || ht == NULL)
		return (0);

	add->key = strdup(key);
	add->value = strdup(value);
	add->next = NULL;

	index = (hash_djb2((const unsigned char *)key)) % (ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = add;
	}
	else
	{
		head = ht->array[index];
		add->next = NULL;
		ht->array[index] = add;
		free(head);
	}
	if (ht->array[index] != NULL)
	{
		head = ht->array[index];
		add->next = head;
		ht->array[index] = add;
	}
	return (1);
}
