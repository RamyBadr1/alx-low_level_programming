#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main-Entry Point.
 *
 * Return: Always 0 (SUCCESS)
*/
int main(void)
{
	int n;
	int rmdr;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	rmdr = n % 10;

	if (rmdr > 5)
       		printf("Last digit of %d is %d and is greater than 5\n", n, rmdr);
	else if (rmdr == 0)
		printf("Last digit of %d is %d\n", n, rmdr);
	else if (rmdr < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rmdr);
	return (0);
}
