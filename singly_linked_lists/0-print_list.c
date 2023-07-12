#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - prints out the nodes from list_t
 * @list_h : our struct that we use
 * @h : our head node 
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	char *str1;
	char *next;

	if (h == NULL)
		return (0);

	while (h)
	{
		str1 = h->str;
		if (str1)
		{
			printf("[%i] %s\n", h->len, str1);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		i++;
		h->next
	}
return (i);
}

