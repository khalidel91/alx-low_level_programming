#include <stdio.h>
/**
 * main - print square
 *
 * Description: largest factor
 * return: always 0
 *
 */
#include <stdio.h>
/**
 * main - print square
 *
 * Description: largest factor
 * return: always 0
 *
 */
int main(void)
{
	long int n;
	n=3453;
	long int div=2, ans = 0, lfactor;
	while(n!=0) {
	if(n % div !=0)
	div = div + 1;
	else {
	lfactor = n;
	n = n / div;
	if(n == 1) {
	printf("%ld\n", lfactor);
	ans = 1;
	break;
	}
	}
	}
}
