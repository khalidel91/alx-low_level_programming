#include "lists.h"
#include <stdio.h>

/**
* free_listint - first function to print lists
* @head: pointer to the first list
* Return: number of nodes
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;
	if (head == NULL)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
