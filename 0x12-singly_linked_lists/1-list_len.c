#include "lists.h"

/**
* print_list - first function to print lists
* @h: pointer to the first list
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
size_t count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}
