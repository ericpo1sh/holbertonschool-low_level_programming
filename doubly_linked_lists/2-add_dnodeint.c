#include "lists.h"
/**
 * add_dnodeint - adds a new node as head node
 * @head : head node
 * @n : new node
 * Return: NULL if failed, store if succes.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *store, *temp;

	store = malloc(sizeof(dlistint_t));

	if (store == NULL)
	{
		free(store);
		return (NULL);
	}

	store->n = n;
	store->prev = NULL;

	if (*head == NULL)
	{
		store->next = NULL;
		*head = store;
	}
	else
	{
		temp = *head;
		store->next = temp;
		temp->prev = store;
		*head = store;
	}
	return (store);
}
