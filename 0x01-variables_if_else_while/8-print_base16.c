#include <stdlib.h>
#include <stdio.h>
/**
* main - our fucntion/entry point
*
* Description: 'a C program that prints hex digits'
*
* Return: Always 0 integer
*/
int main(void)

{
	int ch;

	for (ch = '0'; ch <= '9'; ++ch)
	putchar(ch);
	for (ch = 'a'; ch <= 'f'; ++ch)
	putchar(ch);
	putchar('\n');
	return (0);
}
