#include <stdio.h>

/**
* main - prints the name of program
* @argc: number of args
* @argv: args array
* Return: Always (0)
*/
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
