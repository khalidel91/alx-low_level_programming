#include "main.h"
/**
 * puts2 - function to Print modulo == 0 digits
 *
 * @str: array of digits
 *
 * Return: nothing it's void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
