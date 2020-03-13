#include <stdio.h>
#include <stdarg.h>
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
