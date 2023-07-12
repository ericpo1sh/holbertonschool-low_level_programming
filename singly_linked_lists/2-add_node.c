#include "lists.h"
/**
 *
 *
 *
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if ((head != NULL) && (new != NULL))
	{
		if (new == NULL)
		{
			return (NULL);
		}
		else
		{
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = *head;
		*head = new;
		return (new);
		}
	}
return (0);
}
