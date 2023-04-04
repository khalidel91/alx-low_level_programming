#include "main.h"
#include <string.h>
/**
 * _memset - prints half of a string
 *
 * @s: string input
 * @b: char
 * @n: number
 * Return: return string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	*(s + i) = b;
	}
	return (s);
}
