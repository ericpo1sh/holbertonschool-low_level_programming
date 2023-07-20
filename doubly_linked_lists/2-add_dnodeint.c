#include "lists.h"
/**
 * add_dnodeint - adds a new node as head node
 * @head : head node
 * @n : new node
 * Return: NULL if failed, store if succes.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *store;

	if (head == NULL)
	{
		store = malloc((sizeof(dlistint_t)));
		if (store == NULL)
			return (NULL);
		store->n = n;
		store->next = *head;
		*head = store;
		return (store);
	}
	return (0);
}
