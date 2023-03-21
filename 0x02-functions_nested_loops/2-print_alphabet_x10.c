#include "main.h"
/**
* rint_alphabet_x10 - our fucntion/entry point
*
* Description: 'a C program that prints alphabet'
*
* Return: Always 0 integer
*/
void print_alphabet_x10(void)

{
	char ch;
	int i;

	for (i = 0; i < 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
		_putchar('\n');
	}
}
