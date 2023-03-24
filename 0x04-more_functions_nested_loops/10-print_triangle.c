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
	int i = 0, j = 0, k, l;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size == 1)
	{
		_putchar(35);
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			l = size - (j + 1);
			for (i = 0; i < l; i++)
			{
			_putchar(32);

			}
			for (k = 0; k <= j; k++)
			{
			_putchar(35);
			}
			_putchar('\n');
		}
	}

}
