#include "lists.h"
/**
 * sum_listint - sums up the nodes from my list
 * @head : head node
 * Return: 0 if list empty, sum if passed.
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;
return (sum);
}

