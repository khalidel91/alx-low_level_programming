#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - function that allocates memory
* @b: memory size
*
* Return: array
*/

void *malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);

}
