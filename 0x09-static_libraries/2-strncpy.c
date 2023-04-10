#include "main.h"
#include <string.h>
/**
 * *_strncpy - prints half of a string
 *
 * @dest: string input
 * @src: second string
 * @n: n
 * Return: copied strings
 */

	char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && (*(src + i) != '\0'); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);

}


