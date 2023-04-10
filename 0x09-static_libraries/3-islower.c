#include "main.h"
/**
* _islower - our fucntion/entry point
* @c: character to be checked
*
* Description: 'a C program that check if a charachter is lowercase'
*
* Return: 1 if it's lower and 0 if not
*/
int _islower(int c)
	{
		if (c > 96 && c < 123)
		return (1);
		else
		return (0);
	}
