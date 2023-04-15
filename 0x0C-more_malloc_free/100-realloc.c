#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function to extend memory of previous malloc and/or calloc
 *
 * @ptr: pointer to array
 *
 * @old_size: old size
 *
 * @new_size: new size
 *
 * Return: noting to return it's void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int i;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size > old_size)
	{
		newptr = malloc(new_size);
		for (i = 0; i < old_size; i++)
		{
			newptr[i] = ((char *)ptr)[i];
		}
		free(ptr);
		return (newptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && (ptr))
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
