#include "main.h"
/**
 * _pow_recursion - power
 *
 * @x: int input
 * @y: int input
 * Return: return power of given number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
