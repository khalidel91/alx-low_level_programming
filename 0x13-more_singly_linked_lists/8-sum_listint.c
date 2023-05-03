#include "lists.h"
#include <stdio.h>

/**
* sum_listint - first function to print lists
* @head: pointer to the first list
* Return: number of nodes
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
return (sum);
}
