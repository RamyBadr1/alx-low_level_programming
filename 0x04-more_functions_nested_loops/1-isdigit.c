#include "main.h"
#include <ctype.h>
/**
* _isdigit - checks if char is number
* @c: A char value to be checked
* Return: 1 if number - 0 if not
*/
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
