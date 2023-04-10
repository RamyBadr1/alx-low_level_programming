#include <stdio.h>
#include <stdlib.h>

/**
* main - multiply integer args
* @argc: number of argc
* @argv: array of args
* Return: (argc == 0)? 0 : 1
*/
int main(int argc, char *argv[])
{
	int i;
	int result = 1;

	if (argc == 0)
	{
		puts("Error");
		return (1);
	}

	for (i = 1; i < argc; i++)
		result *= atoi(*(argv + i));

	printf("%d\n", result);

	return (0);
}
