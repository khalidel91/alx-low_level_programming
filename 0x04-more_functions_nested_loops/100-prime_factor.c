#include <stdio.h>
/**
 * main - EntryPoint
 *
 * Description: A C program calculate the prime factor of a certain Number
 *
 * Return: 0 Always Success
 */
int main(void)
{
long int num = 612852475143;
long int i;

for (i = 2; i < num; i++)
{
while (num % i == 0)
num = num / i;
}

printf("%ld\n", num);

return (0);
}
