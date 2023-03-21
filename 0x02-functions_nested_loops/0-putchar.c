#include <main.h>
/**
* main - our fucntion/entry point
*
* Description: 'a C program that prints with puts function'
*
* Return: Always 0 integer
*/
int main(void)

{
	char T[] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(T[i]);

	}

	_putchar('\n');


	return (0);
}
