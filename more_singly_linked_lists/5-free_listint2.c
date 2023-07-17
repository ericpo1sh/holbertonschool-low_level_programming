#include "lists.h"
/**
 * free_listint2 - frees the listint_t list
 * @head : head node
 */
void free_listint2(listint_t **head)
{
	free(head);
}
