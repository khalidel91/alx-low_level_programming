#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 *
 * @str: string input
 *
 * Return: Noting it's void
 */
char *_strcat(char *dest, char *src)
{
	char *con = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (con);
}
