#include "main.h"
/**
 * factorial - factorial
 *
 * @n: int input
 * Return: return factorial o f given number
 */

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0)
	{
		return (1)
	}
	return (n * factorial(n - 1));
}
