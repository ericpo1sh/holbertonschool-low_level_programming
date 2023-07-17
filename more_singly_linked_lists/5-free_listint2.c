#include "lists.h"
/**
 * free_listint2 - frees the listint_t list
 * @head : head node
 */
void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		temp = *head->next;
		free(*head);
		*head = temp;
	}
}
