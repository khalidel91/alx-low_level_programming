#include "main.h"
#include <string.h>
/**
 * *rot13 - leet
 *
 * @s: string
 *
 * Return: leet string
 */
char *rot13(char *s)
{
	int i = 0, j;
	char T1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char T2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 52; j++)
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
