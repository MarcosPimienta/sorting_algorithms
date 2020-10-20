#include "sort.h"

void insertion_sort_list(listint_t **list)
{
    listint_t *current;
    current = *list;
    current  = current->next;

    while(current != NULL)
    {
        while(current != NULL)
        {
            if (current->n < current->prev->n)
            {
                if (current->prev->prev == NULL)
                {
                    current->next->prev = current->prev;
                    current->prev->next = current->next;
                    current->prev->prev = current;
                    current->next = current->prev;
                    current->prev = NULL;
                    *list = current;
                    print_list(*list);
                    break;
                }
                if (current->next == NULL)
                {
                    current->prev = current->prev->prev;
                    current->next = current->prev->next;
                    current->next->prev = current;
                    current->prev->next = current;
                    current->next->next = NULL;
                    print_list(*list);
                }
                current->prev = current->prev->prev;
                current->prev->next->prev = current;
                current->next->prev = current->prev->next;
                current->prev->next->next = current->next;
                current->next = current->prev->next;
                current->prev->next = current;
                print_list(*list);
            }
            else
            {
                break;
            }
        }
        current = current->next;
    }
}
