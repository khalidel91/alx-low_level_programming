#include "main.h"

/**
 * prime - prime
 *
 * @i: int input
 * @n: int input
 * Return: return 1 or -1
 */

int prime(int i, int n)
{
	if (i > n / 2)
	{
	return (1);
	}
	if (n % i == 0)
	{
	return (0);
	}

	return (prime(i + 1, n));
}

/**
 * is_prime_number - is prime
 *
 * @n: int input
 * Return: 1 if prime, -1 if not
 */

int is_prime_number(int n)
{
	if (n == 0)
	{
	return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (prime(2, n));
}
