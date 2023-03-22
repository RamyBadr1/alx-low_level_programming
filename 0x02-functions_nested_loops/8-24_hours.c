#include <unistd.h>
#include <stdio.h>
#include "main.h"

void jack_bauer(void)
{
	int hours, minuts;
	
	for (hours = 0;;hours++)
	{
	for (minuts = 0;;minuts++) {
		if (hours < 10)
			printf("%d", 0);
		printf("%d", hours);
		
		printf(":");
			
		if (minuts < 10)
			printf("%d", 0);
		printf("%d\n", minuts);

		sleep(60);
		
		if (minuts == 59) {
			minuts = 0;
		}		
	}
		if (hours == 23)
		{
			hours = 0;
		}
	}
}
