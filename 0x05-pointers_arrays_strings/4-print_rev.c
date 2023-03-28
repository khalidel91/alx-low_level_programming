#include "main.h"

/**
 * print_rev - function to print a string in reverse
 *
 * @s: String argement
 *
 * Return: nothing it's a void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
