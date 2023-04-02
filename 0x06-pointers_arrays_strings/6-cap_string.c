#include "main.h"
#include <string.h>
/**
 * *cap_string - compare 2 strings
 *
 * @s: string
 *
 * Return: upercase string
 */
char *cap_string(char *s)
{
	int i = 1, j;
	char T[] = " \t\n,;.!?\"(){}";

	if (*s <= 122 && *s >= 97)
	{
	*s -= 32;
	}
	while (*(s + i) != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (T[j] == *(s + i))
			{
				if (*(s + i + 1) <= 122 && *(s + i + 1) >= 97)
				{
				*(s + i + 1) -= 32;
				}
			}
		}
		i++;
	}
return (s);
}
