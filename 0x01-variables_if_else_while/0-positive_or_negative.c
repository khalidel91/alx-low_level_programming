#include <stdlib.h>
#include <time.h>
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
		printf("The number is positive\n)
	else if (n == 0)
		printf("The number is zero\n)
	else
	       printf("The number is negative\n)	
	return (0);
}
