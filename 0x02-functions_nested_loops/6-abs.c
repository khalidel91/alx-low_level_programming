#include "main.h"
/**
 * _abs - entrypoint
 *
 * @r: the num to be check
 *
 * Description: function check if a number is greater or less or equal to 0
 *
 * Return: 1 mean greater & -1 mean less
 */

int _abs(int r)
{
	if (r > 0)
	return (r);
	else
	{
	r = -1 * r;
	return (r);
	}
}
