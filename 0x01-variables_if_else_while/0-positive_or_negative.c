#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - our fucntion/entry point
*
* Description: 'a C program that prints with puts function'
*
* Return: Always 0 integer
*/
int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
