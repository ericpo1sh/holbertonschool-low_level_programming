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

	if (*head == NULL)
		return (-1);

	temp = *head;

	for (i = 0; temp != NULL; i++)
	{
		if (i == index)
		{
			free(temp);
			temp = NULL;
		}
		temp = temp->next;
	}
	return (1);
}
