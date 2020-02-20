#include "holberton.h"
/**
*puts_half - retur the large of a string.
*@str: is a direction of a sting.
*
*/
void puts_half(char *str)
{
	int j = 0,  n;

	for (j = 0; str[j] != '\0'; j++)
	{

	}

	if (j % 2 == 0)
	{
		n = j / 2;
	}
	else
	{
		n = ((j - 1) / 2) + 1;
	}

	for (j = n; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');

}
