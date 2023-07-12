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

	if ((head != NULL) && (str != NULL))
	{
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
	}
return (0);
}
