#include "lists.h"

/**
* print_listnt - first function to print lists
* @h: pointer to the first list
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h)
{
if (!h->str)
printf("[%u] (nil)\n", 0);
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
count++;
}
return (count);
}
