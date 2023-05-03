#include "lists.h"
#include <stdio.h>

/**
* pop_listint - first function to print lists
* @head: pointer to the first list
* Return: number of nodes
*/
int pop_listint(listint_t **head)
{
	int a;

	if (head == NULL)
		return (0);
	a = (*head)->n;
	*head = (*head)->next;
return (a);
}
