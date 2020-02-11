#include "_putchar.h"
/**
 * print_alphabet - writhe the alphabet in lower case.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
	_putchar(a);
	}
	_putchar('\n');
}
