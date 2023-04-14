#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - function that concatenates 2 strings
* @s1: string input 1
* @s2: string input 2
* @n: number of elements of s2 to be concatenated
*
* Return: nconcatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *s;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		i = 0;

		while (s1[i] != '\0')
		i++;
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		j = 0;
		while (s2[j] != '\0')
			j++;
	}

	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];
	s[i + j] = '\0';
	return (s);
}
