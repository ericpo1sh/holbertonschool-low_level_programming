#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the specific node at index
 * @head : head node
 * @index : index
 * Return: -1 if failed, 1 if passed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;
	dlistint_t *del;

	if (*head == NULL)
		return (-1);

	temp = *head;
	del = *head;

	if (index == 0)
		*head = (*head)->next;

	for (i = 0; temp != NULL; i++)
	{
		if ((i < index) && (temp->next == NULL))
		{
			return (-1);
		}
		if (i == (index - 1))
		{
			del = temp->prev;
			del->next = temp->next;
			temp->next->prev = del;
			free(temp);
			continue;
		}
	}
	return (1);
}
