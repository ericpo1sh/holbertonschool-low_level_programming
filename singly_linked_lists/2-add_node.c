#include "lists.h"
/**
 * add_node - adds a new node
 * @head : head
 * @str : literal string
 * Return: NULL if string is null, 0 always.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *store;

	if ((head != NULL) && (str != NULL))
	{
		store = malloc((sizeof(list_t)));
		if (store == NULL)
			return (NULL);
		store->str = strdup(str);
		store->len = strlen(str);
		store->next = *head;
		*head = store;
		return (store);
	}
return (0);
}
