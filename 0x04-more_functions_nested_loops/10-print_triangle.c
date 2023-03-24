#include "main.h"
/**
 * print_triangle - print square
 *
 * @size: parameter dimension of square
 * return: it's a void
 *
 */
void print_triangle(int size)
{
	int i = 0, j = 0, k, l, n = size;

	iif (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			l = n - (j - 1);
			for (i = 0; i < l; i++)
			{
			_putchar(' ');

			}
			for (k = 0; k < j + 1; k++)
			{
			_putchar(35);
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
