#include "main.h"
#include <stdlib.h>
/**
* array_range - function creates array
* @min: starting number
* @max: last number
*
* Return: nconcatenated string
*/

int *array_range(int min, int max)

{
	int *a;
	unsigned int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 2;
	a = (int *) malloc(sizeof(int) * (size));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = min + i;
	return (a);
}
