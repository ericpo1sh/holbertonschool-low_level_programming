#include "lists.h"
/**
 * dlistint_len - prints out only the number of elements in list
 * @h : head node
 * Return: 0 if failed, i if passed.
 */
size_t dlistint_len(const dlistint_t *h)
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
