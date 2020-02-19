#include "holberton.h"
/**
*puts2 - retur the large of a string.
*@str: is a direction of a sting.
*
*/
void puts2(char *str)
{
	int  i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		_putchar(str[a]);
	}
	_putchar('\n');

}
