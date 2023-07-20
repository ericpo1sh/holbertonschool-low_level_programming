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
		head = store;

	if (head != NULL)
	{
		*current = *head;
		while (current->next != NULL)
		{
			current->next = store;
			store->prev = current;
		}
		return (store);
	}
	return (0);
}
