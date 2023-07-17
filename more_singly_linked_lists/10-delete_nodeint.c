#include "lists.h"
/**
 *
 *
 *
 */
unsigned int delete_node(listint_t **head, unsigned int index)
{
        unsigned int i = 0;
        listint_t *temp;
        listint_t *del;

        if (*head == NULL)
                return (-1);

        temp = *head;
        del = NULL;

        for (i = 0; temp != NULL; i++)
        {
                if (i == index)
                {
                        del = temp;
                        *head = temp->next;
                }
                if ((i < index) && (temp->next == NULL))
                        return (-1);

                temp = temp->next;
        }

        if (del != NULL)
                free(del);

        return (1);
}
