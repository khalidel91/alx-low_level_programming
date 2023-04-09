#include "main.h"

/**
 * checkstrs - check if two strings are identical.
 * @s1: string input
 * @s2: string input 2
 * @i: first string index
 * @j: second index for string é
 * Return: 1 if string are identical 0 otherwise.
 */
int checkstrs(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (checkstrs(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (checkstrs(s1, s2, i, j + 1));
	if (s2[j] == '*' && s1[i + 1] != s[j + 1])
		return (checkstrs(s1, s2, i + 1, j));
	if (s2[j] == '*' && s1[i + 1] == s[j + 1])
		return (checkstrs(s1, s2, i + 1, j + 1));
	return (0);
}


/**
 * wildcmp - prime
 * @s1: string input
 * @s2: string input
 * Return:  1 if strings are identical 0 otherwize
 */

int wildcmp(char *s1, char *s2)

{

	return (checkstrs(s1, s2, 0, 0));
}
