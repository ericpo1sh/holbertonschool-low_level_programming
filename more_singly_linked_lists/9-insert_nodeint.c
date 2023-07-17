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
	new->n = n;
	new->next = NULL;

	for (i = 0; temp != NULL; i++)
	{
		if (idx == 0)
			*head = new;
		if ((i < idx) && (temp->next == NULL))
		{
			return (NULL);
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
