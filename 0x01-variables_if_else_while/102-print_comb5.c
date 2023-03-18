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
	int i, j, k, l;

	for (i = '0'; i <= '9'; ++i)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = j; k <= '9'; k++)
			{
				for (l = k + 1; l <= 9; l++)
				{
				putchar(i);
				putchar(j);
				putchar(' ');
				putchar(k);
				putchar(l);
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
