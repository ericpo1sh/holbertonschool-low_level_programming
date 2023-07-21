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
	{
		if ((*head)->next != NULL)
			(*head)->next->prev = NULL;
		free(del);
		*head = (*head)->next;
	}

	while (i < index - 1)
	{
		if ((i < index) && (temp->next == NULL))
		{
			return (-1);
		}
		temp = temp->next;
		i++;
	}
	del = temp->next;
		if (i == (index - 1))
		{
			temp->next = del->next;
			del->next->prev = temp;
			free(del);
		}
	else
	{
		temp->next = NULL;
		free(del);
	}
	return (1);
}
