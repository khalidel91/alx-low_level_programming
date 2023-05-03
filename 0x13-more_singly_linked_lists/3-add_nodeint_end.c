#include "lists.h"
#include <stdio.h>

/**
* add_nodeint_end - first function to print lists
* @head: pointer to the first list
* @n:  int of the new node
* Return: number of nodes
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
			return (new);
		}

		while (tmp->next)
		{
			*tmp = tmp->next;
		}
		tmp->next = new;
	}
return (new);
}
