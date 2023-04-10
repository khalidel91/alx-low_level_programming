#include "main.h"
#include <string.h>
/**
 * *_strcmp - compare 2 strings
 *
 * @s1: string input
 * @s2: second string
 * Return: compared strings
 */

int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}
