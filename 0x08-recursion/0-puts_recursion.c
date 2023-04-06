#include "main.h"
/**
 * _void _print_rev_recursion - prints half of a string
 *
 * @s: string input
 * Return: return string
 */

void _print_rev_recursion(char *s)
{
	while (*s != '\0')
	{
		_puchar(*s);
		s++;
	}
}
