#include "main.h"
/**
 * print_last_digit - entrypoint
 *
 * @r: the num to be check
 *
 * Description: function that print the last digit
 *
 * Return: the last digit
 */

int print_last_digit(int r)
{
	if (r >= 0)
	{
		r = r % 10;
		_putchar('0' + r);
		_putchar('\n');
	return (0);
	}
	else
	{
	r = -1 * r;
	r = r % 10;
	_putchar('0' + r);
	_putchar('\n');
	return (r % 10);
	}
}
