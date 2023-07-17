#include "lists.h"
/**
 * free_listint2 - frees the listint_t list
 * @head : head node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		if (temp != NULL)
		{
			*head = temp->next;
			free(temp);
		}
	}
}
