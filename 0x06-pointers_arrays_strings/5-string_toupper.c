#include "main.h"
#include <string.h>
/**
 * *string_toupper - compare 2 strings
 *
 * @char: string
 *
 * Return: upercase string
 */
char *string_toupper(char *str)
{

	while (*str != '\0')
	{
		if (*str <= 122 && *str >= 97)
		{
			*str = *str - 32;
			str++;
		}
	}
return (*str);
}
