#include "main.h"
#include <string.h>
/**
 * *string_toupper - compare 2 strings
 *
 * @s: string
 *
 * Return: upercase string
 */
char *string_toupper(char *s)
{

	while (*s != '\0')
	{
		if (*s <= 122 && *s >= 97)
		{
			*s = *s - 32;
			s++;
		}
	}
return (s);
}
