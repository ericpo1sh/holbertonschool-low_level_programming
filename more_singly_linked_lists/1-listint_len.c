#include "lists.h"
/**
 * listint_len - prints out the number of elements in the list
 * @h : head node
 * Return: 0 if failed, i if passed.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
	}
