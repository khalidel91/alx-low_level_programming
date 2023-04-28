#include "lists.h"
#include "string.h"

/**
* add_node_end - function that add element at the end
* @head: pointer to the first element
* @str: value of the element
*  Return: the number of nodes
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *list, *end;
size_t i;
list = malloc(sizeof(list_t));
if (list == NULL)
return (NULL);
list->str = strdup(str);
for (i = 0; str[i]; i++)
{};
list->len = i;
list->next = NULL;
end = *head;
if (*head == NULL)
{
*head = list;
}
else
{
while (end->next != NULL)
end = end->next;
end->next = list;
}
return (list);
}
