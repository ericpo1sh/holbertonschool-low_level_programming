#include "hash_tables.h"
/**
 * hash_table_print - prints out hash table
 * @ht: hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	int div = 0;
	unsigned long int i;

	if (ht == NULL)
		return;

	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
		return;

	if (ht != NULL && (ht->size > 0))
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				if (div != 0)
					printf(", ");
				temp = ht->array[i];
				while (temp != NULL)
				{
					printf("\'%s\': \'%s'", temp->key, temp->value);
					if (temp->next != NULL)
						printf(", ");
					temp = temp->next;
					div = 1;
				}
			}
		}
		printf("}\n");
	}
	free(temp);
}
