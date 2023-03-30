#include "main.h"
#include <string.h>
/**
 * reverse_array - compare 2 strings
 *
 * @a: array to be reversed
 * @n: size of array
 * Return: compared strings
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = tmp;
		i++;
	}

}
