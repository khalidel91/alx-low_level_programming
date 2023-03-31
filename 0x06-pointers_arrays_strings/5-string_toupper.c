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
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) <= 122 && *(s + i) >= 97)
		{
			*(s + i) -= 32;
			i++;
		}
	}
return (s);
}
