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
	int i = 0, j = 0, k, n = size;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < n - j; i++)
			{
			_putchar(' ');

			}
			for (k = 0; k < j + 1; k++)
			{
			_putchar(35);
			}
			putchar('\n');
		}
	}
	_putchar('\n');
}
