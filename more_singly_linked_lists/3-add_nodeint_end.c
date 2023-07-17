#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of the list
 * @head : head node
 * @n : new node added
 * Return: NULL if failed, store if passed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *store;
	listint_t *temp;

	store = malloc(sizeof(listint_t));

	if (store == NULL)
	return (NULL);

	store->n = n;
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
