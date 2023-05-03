#include "lists.h"
#include <stdio.h>

/**
* get_nodeint_at_index - first function to print lists
* @head: pointer to the first list
* @index: index
* Return: number of nodes
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (head == NULL || new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else while (idx != 0)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		idx--;
	}
	new->next = tmp->next;
	tmp->next = new;


return (new);
}
