#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *print_strings - this function print all tjhe arguments.
 *@separator: character between the arguments.
 *@n: is a cantity of arguments.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argument;
	va_list validacion;
	unsigned int i, j;
	char *k;

	va_start(validacion, n);
	for (j = 0; j < n; j++)
	{
		if (!(va_arg(validacion, char *)))
			j++;
		else
			return;
	}
	va_end(validacion);
	if (separator == NULL)
		return;
	va_start(argument, n);
	for (i = 0; i < n; i++)
	{
		k = va_arg(argument, char *);
		if (i < (n - 1))
		{
			if (k != NULL)
				printf("%s%s", k, separator);
			else
				printf("(nil)%s", separator);
		}
		else
		{
			if (k != NULL)
				printf("%s\n", k);
			else
				printf("(nil)\n");
		}
	}
	va_end(argument);
}
