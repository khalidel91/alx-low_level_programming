#include <stdio.h>
#include <stdlib.h>
/**
* main - main function
* @argc: argc
* @argv: parameters
*
* Return: 0
*/
int main(int argc, char **argv)

	{
		int res;

		if (argc == 3)
		{

			res = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", res);
		}
		else
			printf("Error\n");

		return (1);
	}
