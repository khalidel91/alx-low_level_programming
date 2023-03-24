#include "main.h"
/**
 * more_numbers - print numbers
 *
 * description: function that print more numbers
 *
 * return: it's a void
 *
 */

void more_numbers(void)
{
	int i = 0, j = 0;

	for (j = 0; j < 10; j++)
	{

		for (i = 0; i < 15; i++)
		{
		if (i >= 10)
			_putchar(49);

			_putchar('0' + i % 10);

		}
	_putchar('\n');
	}
}
