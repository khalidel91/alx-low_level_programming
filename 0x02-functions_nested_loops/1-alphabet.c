#include "main.h"
/**
* print_alphabet - our fucntion/entry point
*
* Description: 'a C program that prints alphabet'
*
* Return: Always 0 integer
*/
void print_alphabet(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	_putchar(ch);
	_putchar('\n');
}
