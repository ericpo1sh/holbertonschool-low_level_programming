#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at specifc index
 * @h : head node
 * @idx : index
 * @n : new node
 * Return: NULL if failed, new if passed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp;
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	temp = *h;

	for (i = 0; temp && i < idx - 1; i++)
		temp = temp->next;

	if (new != NULL)
	{
		new->n = n;
		if (idx == 0)
		{
			new->next = *h;
			new->prev = NULL;
			if (*h != NULL)
				(*h)->prev = new;
			*h = new;
			return (new);
		}
		if (i + 1 == idx)
		{
			new->next = temp->next;
			new->prev = temp;
			if (temp->next != NULL)
				temp->next->prev = new;
			temp->next = new;
			return (new);
		}
	}
free(new);
return (NULL);
}
