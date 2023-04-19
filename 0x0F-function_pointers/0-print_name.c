#include "function_pointers.h"

/**
* print_name - it prints name
* @name: a string
* @f: a pointer to a function
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
