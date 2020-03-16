#ifndef VARIADIC_FUNCTIONS_H_
#define VARIADIC_FUNCTIONS_H_


/**
 * struct selector - Struct 
 *
 * @p: The operator
 * @f: The function associated
 */
typedef struct selector
{
	char *p;
	void (*f)(void *);
} imp;
int _putchar(char c);
int int_index(int *array, int size, int (*cmp)(int));
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /* _HOLBERTON_H_*/
