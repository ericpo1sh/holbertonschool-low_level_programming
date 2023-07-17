#include "lists.h"
/**
 *
 *
 *
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *del;
	listint_t *current;

	if (*head == NULL)
		return (-1);

	temp = *head;
	current = temp->next;

	for (i = 0; temp != NULL; i++)
	{
		if (i == index)
		{
			del = temp;
			free(del);
			*head = current;
		}
		temp = temp->next;
	}
	return (1);
}
