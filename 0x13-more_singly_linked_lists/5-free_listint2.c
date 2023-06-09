#include "lists.h"
#include <stdio.h>

/**
* free_listint2 - first function to print lists
* @head: pointer to the first list
* Return: number of nodes
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
