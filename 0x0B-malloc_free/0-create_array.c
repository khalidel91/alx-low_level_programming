#include "main.h"
#include <stdlib.h>
/**
* create_array - function that creates array
* @size: size of the array
* @c: initializing charachter
*
* Return: array
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
