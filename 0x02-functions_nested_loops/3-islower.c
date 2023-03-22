#include <ctype.h>
#include "main.h"

/**
* _islower - checks if the char in lower case or not.
* @c: is the char to be checked.
* Return: 1 if char is lowercase, otherwise 0.
*/

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
