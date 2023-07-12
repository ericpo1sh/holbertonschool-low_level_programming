#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 *
 *
 *
 */
size_t print_list(const list_t *h)
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
                }
                else
                {
                }
                i++;
                h = h->next;
        }
return (i);
}
