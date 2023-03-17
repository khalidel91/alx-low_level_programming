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
	int i;

	for (i = 0; i <= 9; ++i)
	printf("%d", i);
	putchar('\n');
	return (0);
}
