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
	char *con = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (con);
}
