#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 *
 *
 */
size_t print_list(const list_t *h)
{
	int i;
	char *str1;

	if (h == NULL)
		return (0);

	for (i = 0; h->next != NULL; i++)
	{
		str1 = h->str;
		if (str1)
		{
			printf("[%i] %s\n", h->len, str1);
		}
		else
		{
			printf("[0] %s\n", str1);
		}
	}
return (i);
}

