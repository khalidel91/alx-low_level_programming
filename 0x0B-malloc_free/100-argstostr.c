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


char *argstostr(int ac, char **av)
{
{
	char *s, *res;
	int i, j = 0, len = 0;

	for (i = 0; i < ac; i++)
	{
		len = len + strlen(av[i]);
	}

	s = (char *)malloc(len);
	res = s;
	res = (char *)malloc(len);


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
