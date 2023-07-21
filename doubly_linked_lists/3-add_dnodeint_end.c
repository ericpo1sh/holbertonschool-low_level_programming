#include "lists.h"
/**
 * add_dnodeint_end - adds a new node a the end of the list
 * @head : head node
 * @n : new node
 * Return: NULL IF FAILED, store if passed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *store;
	dlistint_t *temp;

	store = malloc(sizeof(dlistint_t));

	if (store == NULL)
	{
		free(store);
		return (NULL);
	}

	store->n = n;
	store->next = NULL;

	if (*head == NULL)
		*head = store;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
	temp->next = store;
	store->prev = temp;
	}
	return (store);
}
