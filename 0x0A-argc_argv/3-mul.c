#include <stdio.h>
/**
* main - main function
* @argc: argc
* @argv: parameters
*
* Return: 0
*/
int main(int argc, char **argv)

	{
		int i = 1, res;

		if argc == 3
		{

			res = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", res);
			i++;
		}
		else
			printf("Error\n");

		return (0);
	}
