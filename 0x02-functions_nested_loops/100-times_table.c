#include "main.h"

/**
 * times_table - prints the table nine time, starting with 0
 *
 * Return: void
*/
void print_times_table(int n)
{
	int i, j, k;
if (n <= 15 && n >= 0)
{
	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			k = i * j;
			if (j == 0)
				_putchar('0');
			else if (k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else
			{
				_putchar(',');
                                _putchar(' ');
                                _putchar(k / 100 + '0');
                                _putchar((k % 100) / 10 + '0');
				_putchar(k % 10 + '0');
			}
		}
		_putchar('\n');
	}
	}
}
