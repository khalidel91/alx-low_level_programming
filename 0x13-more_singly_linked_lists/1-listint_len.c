#include "lists.h"
#include <stdio.h>

/**
* listint_len - first function to print lists
* @h: pointer to the first list
* Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h)
{
h = h->next;
count++;
}
return (count);
}
