#include "lists.h"
/**
 *
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *store;
	list_t *temp;

	store = malloc(sizeof(size_t));

	if (store == NULL)
	return (NULL);

	store->str = strdup(str);
	store->len = strlen(str);
	store->next = NULL;

	if (*head == NULL)
	{
		*head = store;
	}
	else
		while (head->next != NULL)
		{
