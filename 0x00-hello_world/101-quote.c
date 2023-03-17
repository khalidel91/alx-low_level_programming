#include<stdio.h>

/**
* main - our fucntion/entry point
*
* Description: 'a C program that prints with printf'
*
* Return: Always 0 integer
*/
int main(void)
{
char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
while (*s)
putchar(*s++);
return (1);
}
