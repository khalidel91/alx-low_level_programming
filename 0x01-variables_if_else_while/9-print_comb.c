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
	int ch;

	for (ch = '0'; ch <= '9'; ++ch)
	{
		putchar(ch);
		if (ch != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
