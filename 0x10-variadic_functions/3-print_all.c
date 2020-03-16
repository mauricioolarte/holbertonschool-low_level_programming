#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 *str - is print string
 *@s: is a string.
 */
void str(char *s)
{
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 *print_all - this function print everithing.
 *@format: the format of argument.
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *separador = "";
	va_list selector;

	va_start(selector, format);
	while (format[i] != '\0')
	{
		if (j > 0)
			separador = ", ";

		if (format[i] == 'c' || format[i] == 's' ||
		    format[i] == 'f' || format[i] == 'i')
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separador, va_arg(selector,
								 int));
				break;
			case 's':
				printf("%s", separador);
				str(va_arg(selector, char *));
				break;
			case 'f':
				printf("%s%f", separador,  va_arg(selector,
								double));
				break;
			case 'i':
				printf("%s%d", separador, va_arg(selector,
							       int));
				break;
			}
			j++;
		}
		i++;
	}
	va_end(selector);
	printf("\n");
}
