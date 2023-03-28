#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 *
 * @str: string input
 *
 * Return: Noting it's void
 */
void puts_half(char *str)
{
	int i = 0;
	int l = strlen(str);

	if (l % 2 == 0)
	{
	for (i = l / 2 ; i < l; i++)
	{
	putchar(str[i]);
	}
	}
	else
	{
	for (i = (l / 2) + 1 ; i < l; i++)
	{
	putchar(str[i]);
	}
	}
	putchar('\n');
	}
