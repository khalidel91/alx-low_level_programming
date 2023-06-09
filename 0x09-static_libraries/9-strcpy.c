#include "main.h"
/**
 * _strcpy - copies a string from a pointer to another
 *
 * @src: first string
 *
 * @dest: copied string
 *
 * Return: New string
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
