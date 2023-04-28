#include "lists.h"

/**
* list_len - first function to print lists
* @h: pointer to the first list
* Return: number of nodes
*/

list_t *add_node(list_t **head, const char *str)
{

list_t *newlist;
size_t i;

newlist = malloc(sizeof(list_t));
if (newlist == NULL)
return (NULL);
newlist->str = strdup(str);
for (i = 0; str[i] != NULL; i++)
{};
newlist->len = i;
newlist->next = *head;
*head = newlist;
return (newlist);
}
}
