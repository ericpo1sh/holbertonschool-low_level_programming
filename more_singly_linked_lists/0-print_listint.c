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
	char *str1 = NULL;

	if (h == NULL)
		return (0);

	while (h)
	{
		str1 = h->str;
		if (str1)
		{
			printf("%s\n", str1);
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

