#include "lists.h"
#include <stdio.h>

/**
* get_nodeint_at_index - first function to print lists
* @head: pointer to the first list
* @index: index
* Return: number of nodes
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	while (index != 0)
		{
			head = head->next;
			if (head == NULL)
				return (NULL);
			index--;
		}
return (head);
}
