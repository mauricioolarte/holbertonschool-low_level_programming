#include "holberton.h"
/**
*_puts - retur the large of a string.
*@str: is a direction of a sting.
*
*/
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');

}
