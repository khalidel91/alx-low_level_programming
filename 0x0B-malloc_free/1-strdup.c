#include "main.h"
#include <stdlib.h>
/**
* _strdup - function that creates array
* @str: input string
* @c: initializing charachter
*
* Return: array
*/

char *_strdup(char *str)
{
	char *s;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;
	len += 1;

	s = (char *)malloc((sizeof(char) * len));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = str[i];
//	s[len] = '\0';

	return (s);
}
