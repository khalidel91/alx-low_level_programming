#include "lists.h"
#include <string.h>

/**
* add_node - first function to print lists
* @str: pointer to the first list
* @head: pointer to first element
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
for (i = 0; str[i]; i++)
{};
newlist->len = i;
newlist->next = *head;
*head = newlist;
return (newlist);
}
