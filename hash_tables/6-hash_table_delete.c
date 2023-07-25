#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table
 * @ht : hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *current;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (current->value != NULL)
				free(current->value);
			if (current->key != NULL)
				free(current->key);
			temp = current->next;
			free(current);
			current = temp;
		}
	}
	free(ht->array);
	free(ht);
}
