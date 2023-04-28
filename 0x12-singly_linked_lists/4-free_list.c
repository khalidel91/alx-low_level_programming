#include "lists.h"

/**
* free_list - function that frees a singly linked list
* @head: pointer to the head of the list
*/

void free_list(list_t *head)
{
    list_t *tmp;

    while (head != NULL)
    {
        tmp = head;
        head = head->next;
        free(tmp->str);
        free(tmp);
    }
}
