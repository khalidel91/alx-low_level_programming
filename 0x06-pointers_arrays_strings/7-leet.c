#include "main.h"
#include <string.h>
/**
 * *leet - leet
 *
 * @s: string
 *
 * Return: leet string
 */
char *leet(char *s)
{
	int i = 0, j;
	char T1[] = "aAeEoOtTlL";
	char T2[] = "4433007711";

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (T1[j] == *(s + i))
			{
			*(s + i) = T2[j];
			}
		}
		i++;
	}
return (s);
}
