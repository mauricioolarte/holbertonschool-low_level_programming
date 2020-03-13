#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all - this function sum all tjhe arguments.
 *@n: number of arguments.
 *Return: integer the sum of argument.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argument;
	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
		return (0);
	va_start(argument, n);
	for (i = 0; i < n; i++)
		sum += va_arg(argument, unsigned int);
	va_end(argument);
	return (sum);
}
