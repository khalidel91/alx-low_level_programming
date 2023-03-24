#include "main.h"
/**
 * print_square - print square
 *
 * @size: parameter dimension of square
 * return: it's a void
 *
 */
void print_square(int size)
{
	int i = 0, j = 0, n = size;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
		for (i = 0; i < n; i++)
		{
			_putchar('#');
		}
			_putchar('\n');
		}
	}
}
