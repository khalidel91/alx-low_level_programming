#include "lists.h"
#include <stdio.h>

/**
* free_listint - first function to print lists
* @head: pointer to the first list
* Return: number of nodes
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

		while (index--)
		{
			head = head->next;
			if (head == NULL)
				return (NULL);
		}
return (head);
}