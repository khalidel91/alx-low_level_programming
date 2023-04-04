#include "main.h"
#include <string.h>
/**
 * _memcpy - copy memory
 *
 * @dest: string input
 * @src: string input
 * @n: number
 * Return: return string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	*(src + i) = *(dest + i);
	}
	return (dest);
}
