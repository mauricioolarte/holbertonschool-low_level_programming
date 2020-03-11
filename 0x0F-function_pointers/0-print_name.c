#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_name - is function print a name.
 *@name: is a string.
 *@f: is a function.
 */

void print_name(char *name, void (*f)(char *))
{

	f(name);
}
