#include <ctype.h>
/**
* _isalpha - checks if c is alphabet
* @c: is a char to be checked
* Return: int value
*/
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);

	return (0);
}
