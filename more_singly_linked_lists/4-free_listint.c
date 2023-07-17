#include "lists.h"
/**
 * free_listint - frees the listint_t list
 * @head : head node
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free((int)(head->n));
		free(head);
		head = temp;
	}
}
