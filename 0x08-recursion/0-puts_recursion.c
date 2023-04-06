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
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
