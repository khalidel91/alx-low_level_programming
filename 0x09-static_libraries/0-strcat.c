#include "main.h"
#include <string.h>
/**
 * *_strcat - prints half of a string
 *
 * @dest: string input
 * @src: second string
 * Return: concatenate
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
