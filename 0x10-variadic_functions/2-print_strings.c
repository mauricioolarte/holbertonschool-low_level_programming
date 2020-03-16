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
	unsigned int i;
	char *k;

	if (separator == NULL)
		return;
	va_start(argument, n);
	k = va_arg(argument, char *);
	if (k != NULL)
		printf("%s", k);
	else
		printf("(nil)");
	for (i = 1; i < n; i++)
	{
		k = va_arg(argument, char *);
		if (k != NULL)
			printf("%s%s", separator, k);
		else
			printf("%s(nil)", separator);

	}
va_end(argument);
printf("\n");
}
