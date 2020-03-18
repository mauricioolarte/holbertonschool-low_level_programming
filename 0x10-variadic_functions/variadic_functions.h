#ifndef VARIADIC_FUNCTIONS_H_
#define VARIADIC_FUNCTIONS_H_
#include <stdarg.h>

/**
 * struct selector - Struct
 *
 * @p: The operator
 * @fu: The function associated
 */
typedef struct selector
{
	char *p;
	void (*fu)(va_list selector);
} imp;
int _putchar(char c);
int int_index(int *array, int size, int (*cmp)(int));
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _char(va_list selector);
void _string(va_list selector);
void _float(va_list selector);
void _int(va_list selector);
#endif /* _HOLBERTON_H_*/
