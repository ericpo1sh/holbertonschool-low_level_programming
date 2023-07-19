#include "lists.h"
/**
 * print_dlistint - prints all content in the list
 * @h : head node
 * Return: 0 if failed i if passed
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

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
