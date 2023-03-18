#include <stdlib.h>
#include <stdio.h>
/**
* main - our fucntion/entry point
*
* Description: 'a C program that prints digits from 0 to 9 separated by commas'
*
* Return: Always 0 integer
*/
int main(void)

{
	int i, j;

	for (i = '0'; i <= '9'; ++i)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
