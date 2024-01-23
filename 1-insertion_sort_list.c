#include "sort.h"

/**
 * insertion_sort_list - sorting a list using insertion sort
 * @list: targeted list
 * Return: Nothing
*/

void insertion_sort_list(listint_t **list)
{
    listint_t *p1 = *list, *p2 = *list;

    while (list && p1)
    {
        p1 = p1->next;
        if (p1 && p1->prev)
        {
            if (p1->prev->n > p1->n)
            {
                p2 = p1->next;
                while (p1->prev && p1->prev->n > p1->n)
                {
                    if (p1->next)
                        p1->next->prev = p1->prev;
                    if (p1->prev->prev)
                        p1->prev->prev->next = p1;
                    p1->prev->next = p1->next;
                    p1->next = p1->prev;
                    p1->prev = p1->prev->prev;
                    p1->next->prev = p1;
                    while ((*list)->prev)
                        *list = (*list)->prev;
                    print_list(*list);
                }
                if (p2)
                    p1 = p2->prev;
            }
        }
    }
}
