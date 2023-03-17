#include <stdlib.h>
#include <stdio.h>
/**
* main - our fucntion/entry point
*
* Description: 'a C program that prints digits from 0 to 9'
*
* Return: Always 0 integer
*/
int main(void)

{
	char ch;

	for (ch = '0'; ch <= '9'; ++ch)
	putchar(ch);
	putchar('\n');
	return (0);
}
