#include "lists.h"
/**
 *
 *
 *
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp;
	dlistint_t *add = NULL;

	add = malloc(sizeof(dlistint_t));
	temp = *head;

	for (i = 0; temp && i < idx - 1; i++;)
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
