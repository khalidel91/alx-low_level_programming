#include "main.h"
#include <string.h>
/**
 * _strchr - locate a charachter
 *
 * @s: string input
 * @c: charachter to be searched
 * Return: pointer tp the first charachter
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			break;
		}
		*s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
