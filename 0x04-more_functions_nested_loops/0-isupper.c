#include "main.h"
#include <ctype.h>
/**
*_isupper - check if the char is an upper letter.
*@c: accepts an int value.
*Return: if letter is upper return 1, if it's return 0.
*/
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
