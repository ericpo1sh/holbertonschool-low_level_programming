#include "lists.h"
/**
 *
 *
 *
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *new = NULL;

	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	temp = *head;

	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++
	}

	if (new != NULL)
	{
		new->n = n;
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		if (i + 1 == idx)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
	}
	return (NULL);
}
