#include "lists.h"
/**
 * add_node_end - adding a node at the end
 * @head : this is our head
 * @str : cstring to add
 * Return: NULL IF INVALID, pointer to node if passed.
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
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = store;
	}
	return (store);
}
