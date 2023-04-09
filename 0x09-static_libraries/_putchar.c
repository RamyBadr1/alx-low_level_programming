#include <unistd.h>
#include "main.h"

/**
*_putchar - print c to stdout.
*Return on success 1.
*On error, -1 is returned, and errno is set apprpriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
