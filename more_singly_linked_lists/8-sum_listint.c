#include "lists.h"
/**
 *
 *
 *
 *
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	
	temp = *head;

	while (head)
	{
		sum += temp->n;
		temp = temp->next;
	}
return (sum);
}

