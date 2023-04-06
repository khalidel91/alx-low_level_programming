#include "main.h"
/**
 * _print_rev_recursion - prints half of a string
 *
 * @s: string input
 * Return: return string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
