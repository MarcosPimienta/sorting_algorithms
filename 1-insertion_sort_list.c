#include "sort.h"

void insertion_sort_list(listint_t **list)
{
        listint_t *current, *temp;
        current = *list;

        while(current->next != NULL)
        {
                temp = current;
                while(temp != NULL)
                {
                        if (current->n < current->prev->n)
                        {
                                /**
                                if (current->prev->prev == NULL)
                                {
                                current->prev->next = current->next;
                                current->prev->prev = current;
                                current->prev = NULL;
                                break;
                                }
                                */
                                current->prev = current->prev->prev;
                                current->prev->next->prev = current;
                                current->next->prev = current->prev->next;
                                current->prev->next->next = current->next;
                                current->next = current->prev->next;
                                current->prev->next = current;
                        }
                        else
                                break;
                temp = temp->prev;
                }
        current = current->next;
        }
}