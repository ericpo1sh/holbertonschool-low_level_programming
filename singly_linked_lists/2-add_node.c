#include <stdio.h>
#include <stdlib.h>
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

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (0);
	
	new->str = _strdup(str);
	new->len = strlen(str);
	new->next = *head;

	*head = new;

return (new);
}
