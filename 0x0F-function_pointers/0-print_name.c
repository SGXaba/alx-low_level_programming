#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 *
 * @name: name of print
 * @f: pointer to the printing function
 */

void print_name(char *name, void (*f)(char *));
{
	if (name && f)
		f(name);
}
