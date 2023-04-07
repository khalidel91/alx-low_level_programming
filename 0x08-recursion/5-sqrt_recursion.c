#include "main.h"

/**
 * _sqrt - power
 *
 * @a: int input
 * @b: int n
 * Return: return sqrt of given number
 */

int _sqrt(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (_sqrt(a + 1, b));
}

/**
 * _sqrt_recursion - power
 *
 * @n: int input
 * Return: return sqrt of given number
 */

int _sqrt_recursion(int n)

{

	if (n == 0)
	{
	return (0);
	}
	return (_sqrt(1, n));
}
