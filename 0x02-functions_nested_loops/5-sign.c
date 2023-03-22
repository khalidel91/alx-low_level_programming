#include "main.h"
/**
 * print_sign - entrypoint
 *
 * @n: to num to be check
 *
 * Description: function check if a number is greater or less or equal to 0
 *
 * Return: 1 mean greater & -1 mean less
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
return (0);
}
