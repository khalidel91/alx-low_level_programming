#include <stdio.h>
/**
 * main - entrypoint
 *
 * 
 *
 * Description: function check if a number is greater or less or equal to 0
 *
 * Return: 1 mean greater & -1 mean less
 */

void main()
{
	int sum, i;
	sum = 0;
	for (i = 0; i < 1024; i++)
	{
	if (i % 3 == 0)
		sum = sum + i;
	else if (i % 5 == 0)
		sum = sum + i;
	}
	printf("%d", sum);

}
