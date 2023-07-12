#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - listing the number of elements in the node
 * @h : head
 * Return: always count.
 */
size_t list_len(const list_t *h)
{
	int i = 0;
	char *str1 = NULL;

	if (h == NULL)
		return (0);

	while (h)
	{
		str1 = h->str;
		if (str1)
		{
		i++;
		h = h->next;
		}
	}
return (i);
}
