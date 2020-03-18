#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>


/**
 *print_all - this function print everithing.
 *@format: the format of argument.
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *separador = "";

	imp selec[] = {
		{"c", _char},
		{"s", _string},
		{"i", _int},
		{"f", _float},
		{NULL, NULL}
	};
	va_list selector;

	va_start(selector, format);
	while (format && format[i] != '\0')
	{
		j = 0;
		while (selec[j].p != NULL)
		{
			if (selec[j].p[0] == format[i])
			{
				printf("%s", separador);
				selec[j].fu(selector);
				separador = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(selector);
	printf("\n");
}
/**
*_string - print a passed string
*@selector: is a pointer.
 */
void _string(va_list selector)
{
	char *nulo;

	nulo = va_arg(selector, char *);
	if (nulo == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", nulo);
}

/**
 *_float - print a float
 * @selector: float passed
 */
void _float(va_list selector)
{
	printf("%f", va_arg(selector, double));
}

/**
 *_char - print a single char
 *@selector: is a pointer.
 */
void _char(va_list selector)
{
	printf("%c", va_arg(selector, int));
}
/**
 *_int - print an int
 *@selector: is a pointer.
 */
void _int(va_list selector)
{
	printf("%d", va_arg(selector, int));
}
