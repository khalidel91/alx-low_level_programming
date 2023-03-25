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
        long int number = 612852475;
        int is_Prime(long int p)
        {
        if (p <= 1)
        {
        return (0);
        }
        for (long int i = 2; i <= p / 2; i++)
        {
                if (p % i == 0)
                {
                return (0);
                }
        }
        return (1);
        }


        for (long int i = number / 2; i >= 2; i--)
        {
 if (number % i == 0)
        {
        if (is_Prime(i))
        {
                printf("%ld\n", i);
                break;
        }
        }
        }
        return (0);
}
