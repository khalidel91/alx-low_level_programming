#include "main.h"
/**
 * _puts_recursion - prints half of a string
 *
 * @s: string input
 * Return: return string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n'_puts_recursion);
		return;
	}
	_putchar(s[0]);
	_print_rev_recursion(s + 1);
}
