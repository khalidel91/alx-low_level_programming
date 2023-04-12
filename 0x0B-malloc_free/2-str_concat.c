#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatenate function
* @s1: input string 1
* @s2: input string 2
*
* Return:concatenates 2 strings
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, len1 = 0, len2 = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	while (s1[len1] != '\0')
		len1++;
	len1 += 1;
	while (s2[len2] != '\0')
		len2++;
	len2 += 1;

	concat = (char *)malloc((sizeof(char) * (len1 + len2)));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (i = len1; i < (len1 + len2); i++)
		concat[i] = S2[i - len1];

	return (concat);
}
