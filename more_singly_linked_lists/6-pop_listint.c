#include "lists.h"
/**
 *
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (0);
	else
	{
		*temp = *head;
		*head = *head->next;
		free(*temp);
		temp = NULL;
	}
	return (n);
}
