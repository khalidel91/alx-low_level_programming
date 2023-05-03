#include "lists.h"
#include <stdio.h>

/**
* free_listint - first function to print lists
* @head: pointer to the first list
* Return: number of nodes
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

		while (head->next)
		{
			tmp = head;
			head = head->next;
			free (*tmp);
		}
}
