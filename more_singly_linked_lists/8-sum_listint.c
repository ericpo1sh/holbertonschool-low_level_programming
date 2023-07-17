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

	while (head)
	{
		head = head->next;
		sum += *head;
	}
return (sum);
}

