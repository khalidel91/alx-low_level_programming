#include "lists.h"

/**
* list_len - first function to print lists
* @h: pointer to the first list
* Return: number of nodes
*/

size_t list_len(const list_t *h)
{
size_t count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}
