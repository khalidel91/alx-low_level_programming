#include "main.h"
/**
 * _puts - function that calculate the lenth of a string
 *
 * description: reset to n
 *
 * @str: string
 *
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
