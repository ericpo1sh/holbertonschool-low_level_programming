#include "lists.h"
/**
 * add_nodeint - adds a new node at the beggining
 * @head : the head node
 * @n : new node
 * Return: always 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *store;

	if (head != NULL)
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
