#include "lists.h"
/**
 *
 *
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *del;

	if (*head == NULL)
		return (-1);

	temp = *head;
	del = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(del);
	}

	for (i = 0; temp != NULL; i++)
	{
		if ((i < index) && (temp->next == NULL))
		{
			return (-1);
		}
		if (i == (index - 1))
		{
			del = temp->next;
			free(del);
			*head = temp->next;
		}
		temp = temp->next;
	}
	return (1);
}
