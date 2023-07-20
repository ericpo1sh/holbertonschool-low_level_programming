#include "lists.h"
/**
 * get_dnodeint_at_index - gets the node at index
 * @head : head node
 * @index : the given index
 * Return: temp if success, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = head;

	for (i = 0; temp != NULL; i++)
	{
		if (i == index)
		{
			return (temp);
		}
		temp = temp->next;
	}
	return (NULL);
}
