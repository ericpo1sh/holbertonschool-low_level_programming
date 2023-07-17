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
		return (-1);

	temp = *head;
	new->n = n;
	new->next = NULL;

	for (i = 0; temp != NULL; i++)
	{
		if ((i < idx) && (temp->next == NULL))
		{
			return (-1);
		}
		if (i == (idx - 1))
		{
			if (temp->next != NULL)
				temp->next = new;
		}
		temp = temp->next;
	}
	return (new);
}
