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
	char *p;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			p = (s + i);
			break;
		}
	}
	if ((*(s + i)) == '\0')
		return (NULL);
	else
		return (p);
}
