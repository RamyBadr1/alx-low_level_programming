#include <stdio.h>
#include <stdlib.h>

/**
* main - multiply integer args
* @argc: number of argc
* @argv: array of args
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	printf("%d\n", x * y);

	return (0);
}
