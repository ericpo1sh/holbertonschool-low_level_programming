#include "lists.h"
/**
 * insert_nodeint_at_index - adds a node anywhere at idx
 * @head : head node
 * @idx : index
 * @n : new node
 * Return: new if passed and NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	temp = *head;

	for (i = 0; temp != NULL; i++)
		temp = temp->next;

	if (new != NULL)
	{
		new->n = n;
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		if (i + 1 == idx)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
	}
free(new);
return (NULL);
}
