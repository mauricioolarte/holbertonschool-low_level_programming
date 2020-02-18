#include "holberton.h"
/**
*puts2 - retur the large of a string.
*@str: is a direction of a sting.
*
*/
void puts2(char *str)
{
	int j = 0, i = 0;

	while (*(str + i) != '\0')
	{
		j++;
		i++;
	}

	for (i = 0; i <= j; i++)
	{
		if (i % 2 == 0)
		_putchar(*(str + i));
	}
	_putchar('\n');

}
