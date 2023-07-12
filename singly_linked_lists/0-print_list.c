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

	if (h == NULL)
		return (0);

	while (h->next)
	{
		str1 = h->str;
		i++;
		if (str1)
		{
			printf("[%i] %s\n", h->len, str1);
			str1 = h->next;
		}
		else
		{
			printf("[0] (nil)\n");
		}
	}
return (i);
}

