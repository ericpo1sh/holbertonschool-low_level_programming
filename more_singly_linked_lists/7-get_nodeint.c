#include "lists.h"
/**
 * get_nodeint_at_index - gets the node at the index
 * @head : head node
 * @index : the index given that counts the nodes
 * Return: temp if sucessfully found node, NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;

	while (temp != NULL)
	{
		i++;
		if (i == index)
		{
			return (temp);
		}
		temp = temp->next;
	}
	return (NULL);
}
