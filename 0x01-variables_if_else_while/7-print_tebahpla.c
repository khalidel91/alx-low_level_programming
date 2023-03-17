#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - our fucntion/entry point
*
* Description: 'a C program that prints alphabet'
*
* Return: Always 0 integer
*/
int main(void)

{
	char ch;

	for (ch = 'z'; ch >= 'a'; --ch)
	putchar(ch);
	putchar('\n');
	return (0);
}
