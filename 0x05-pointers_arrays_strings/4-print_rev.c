#include "holberton.h"
/**
*print_rev - retur the large of a string.
*@s: is a direction of a sting.
*
*/
void print_rev(char *s)
{
	int j = 0, i = 0;

	while (*(s + i) != '\0')
	{
		j++;
		i++;
	}

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');

}
