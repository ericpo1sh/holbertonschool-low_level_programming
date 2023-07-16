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
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}

