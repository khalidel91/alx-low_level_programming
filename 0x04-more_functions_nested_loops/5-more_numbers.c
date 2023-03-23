#include "main.h"
/**
 * more_numbers - print numbers
 *
 * description: function that print more numbers
 *
 *
 *
 */

void more_numbers(void)
{
	int i = 0, j;

	for (j = 0; j < 10; j++)
	{

		for (i = 0; i < 15; i++)
		{
		if (i < 10)
		_putchar('0' + i);
		else
			_putchar('1');
			_putchar('0' + i % 10);

		}
	_putchar('\n');
	}
}
