#include "main.h"
#include <string.h>
/**
 * _strpbrk - strpbrk
 *
 * @s: string input
 * @accept: string input
 * Return: strpbrk function
 */

char *_strpbrk(char *s, char *accept)
	{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
				s += i;
			}
		}
	if (s[0] == accept[j])
	{
		return (s);
	}
	return ('\0');
}
