#include <ctype.h>
/**
*_isalpha - checks if c is alphabet
*
* Return: int value
*/
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);

	return (0);
}
