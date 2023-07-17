#include "lists.h"
/**
 *
 *
 *
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *store;

	if ((head != NULL) && (n != NULL))
	{
		store = malloc((sizeof(listint_t)));
		if (store == NULL)
			return (NULL);
		store->n = n;
		store->next = *head;
		*head = store;
		return (store);
	}
return (0);
}
