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

	if (*head == NULL)
		return (-1);

	temp = *head;
	del = *temp->next;

	for (i = 0; temp != NULL; i++)
	{
		if (i == index)
		{
			free(temp);
			*head = del;
		}
		temp = temp->next;
	}
	return (1);
}
