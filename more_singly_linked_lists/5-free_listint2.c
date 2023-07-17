#include "lists.h"
/**
 * free_listint2 - frees the listint_t list
 * @head : head node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	if (*head != NULL)
	{
		temp = *head;
		while (*head != NULL)
		{
			temp = temp->next;
			free(*head);
			*head = temp;
		}
	}
}
