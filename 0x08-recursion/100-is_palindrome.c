#include "main.h"

/**
 * _strlen - lenght of string
 *
 * @s: string
 *
 * Return: return lenght of string
 */

int _strlen(char *s)
{
	if (*s != '\0')
	return (1 + _strlen(s + 1));

return (0);
}

/**
 * ispal - check if a string is pal
 *
 * @s : string input
 * @i: starting charachter
 * @j: last charachter
 * Return: 1 if palindrime 0 else
 */

int ispal(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
		if (i > j / 2)
			return (1);
		else
			return (ispal(s, i + 1, j - 1));
	else
		return (0);
}

/**
 * is_palindrome - prime
 * @s: string input
 * Return:  1 if palindrime 0 else
 */

int is_palindrome(char *s)

{

	return (ispal(s, 0, _strlen(s) - 1));
}
