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
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			s += i;
			break;
		}
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
