#include "main.h"
/**
 * print_diagonal - print numbers
 *
 * @n: parameter number of underscore
 * return: it's a void
 *
 */
void print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
		for (i = 0; i < j; i++)
		{
			_putchar(' ');
		}
		_putchar(92);
		}
	_putchar('\n');
	}
}
