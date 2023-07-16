#include "lists.h"
/**
 * print_list - prints all the content in the list
 * @h : our head node
 * Return: 0 if head is NULL, i if passed
 *
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *next_node = NULL;

	if (h == NULL)
		return (0);

	while (h)
	{
		next_node = h->next;
		if (next_node)
		{
			printf("%d\n", next_node->n);
		}
		else
		{
			printf("(nil)\n");
		}
		i++;
		h = h->next;
	}
	return (i);
}

