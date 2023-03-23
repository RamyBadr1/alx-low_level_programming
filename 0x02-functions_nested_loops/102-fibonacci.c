#include <stdio.h>

int main(void)
{
	int num = 1;
	int loops;

	for (loops = 1; num <= 50; loops++ )
	{
		if (num == 1)
		{
			num += num;
			continue;
		}

		num += num - 1;
		printf("%d, ", num);
	}

	return (0);
}
