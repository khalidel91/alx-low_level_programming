#include "lists.h"
#include <stdio.h>

/**
* add_nodeint - first function to print lists
* @head: pointer to the first list
* @n:  int of the new node
* Return: number of nodes
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listunt_t *new;
	size_t count = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
return (new);
}
