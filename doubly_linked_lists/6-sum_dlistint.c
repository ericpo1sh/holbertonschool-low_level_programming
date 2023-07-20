#include "lists.h"
/**
 * sum_dlistint - sums up all nodes from my list
 * @head : head node
 * Return: 0 if empty list, sum if passed
 *
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
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
