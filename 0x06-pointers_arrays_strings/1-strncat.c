#include "main.h"
#include <string.h>
/**
 * *_strncat - prints half of a string
 *
 * @dest: string input
 * @src: second string
 * @n: n
 * Return: concatenate
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *con = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (i < n i && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (con);
}
