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
	int i = 0

	bool is_Prime(int p)
	{
	if (p <= 1)
	{
	return (false);
	}
	for (int i = 2; i <= p / 2; i++)
	{
		if (p % i == 0)
		{
		return (false);
		}
	}
	return (true);
	}
	int number = 612852475143;

	for (int i = number / 2; i >= 2; i--)
	{
	if (number % i == 0)
	{
	if (is_Prime(i))
	{
		printf("%d\n", i);
		break;
	}
	}
	}
	return (0);
}
