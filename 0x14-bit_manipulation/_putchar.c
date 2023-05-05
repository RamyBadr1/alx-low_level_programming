#include <stdio.h>
#include "main.h"

/**
*_putchar - print c.
*Return: 1 | 0 
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
