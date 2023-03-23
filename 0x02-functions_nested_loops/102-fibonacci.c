#include <stdio.h>

int main(void)
{
	long num = 0, num2 = 1, sum;
	int loops;

	for (loops = 1; loops <= 50; loops++)
	{
		sum = num + num2;

		printf("%lu", sum);

		num = num2;
		num2 = sum;

		if (loops < 50)
			printf(", ");
	}

	printf("\n");
	return (0);
}
