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
	int l = _strlen(str);

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
