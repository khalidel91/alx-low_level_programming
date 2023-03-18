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
	int i, j, k;

	for (i = '0'; i <= '9'; ++i)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
			putchar(i);
			putchar(j);
			putchar(k);
			if ((i == '7') && (j == '9') && (k == '9'))
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
