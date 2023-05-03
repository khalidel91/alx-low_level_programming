#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* argstostr - concatenate function
* @ac: input argc
* @av: input argv
*
* Return:concatenates argv arguments
*/

char **strtow(char *str)
{
	char **s;
	int i, j = 0, len = 0;

	if (str == "" || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == " ")
			k++;
	}
	s = (char **)malloc(k + 1);

	for (i = 0; i < strlen(str); i++)
		j = 0;
		while (str[j] != " ")
		{
			j++;


			
	}

	res = (char *)malloc(len + 1);
	s = res;

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while ((av[i][j]) != '\0')
		{
		*s = av[i][j];
		j++;
		s++;
		}
		*s = '\n';
		s++;
	}
	return (res);
}
