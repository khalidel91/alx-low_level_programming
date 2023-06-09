#include "lists.h"
#include <stdio.h>

/**
* print_listint - first function to print lists
* @h: pointer to the first list
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h)
{
if (!h->n)
printf("%d\n", 0);
else
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
