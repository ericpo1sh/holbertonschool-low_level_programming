#include "lists.h"
/**
 * pop_listint - deletes the head node of the list
 * @head : the head node
 * Return: 0 if failed, i if passed.
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i = 0;

	if (*head == NULL)
		return (0);
	else
	{
		temp = *head;
		i = temp->n;
		*head = *head->next;
		free(temp);
	}
	return (i);
}
