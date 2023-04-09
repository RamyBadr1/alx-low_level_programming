#include <stdio.h>

/**
* main - print args number.
* @argc: args number
* @argv: args array
* Return: Always (0)
*/
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
