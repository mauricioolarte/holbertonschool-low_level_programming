#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - this function print all tjhe arguments.
 *@separator: character between the arguments.
 *@n: is a cantity of arguments.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argument;
	unsigned int i;

	if (separator == NULL)
		return;
	va_start(argument, n);
	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
			printf("%d%s", va_arg(argument, int), separator);
		else
			printf("%u\n", va_arg(argument, int));
	}
	va_end(argument);

}
