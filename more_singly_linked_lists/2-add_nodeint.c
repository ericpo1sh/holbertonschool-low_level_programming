#include "lists.h"
/**
 *
 *
 *
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_int_t *store;

	if ((head != NULL) && (str != NULL))
	{
		store = malloc((sizeof(list_int_t)));
		if (store == NULL)
			return (NULL);
		store->n = n;
		store->next = *head;
		*head = store;
		return (store);
	}
return (0);
}
