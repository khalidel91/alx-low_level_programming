#include "main.h"
/**
 * swap_int - print numbers
 *
 * description: reset to n
 *
 * @a: pointer
 * @b: pointer b
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
