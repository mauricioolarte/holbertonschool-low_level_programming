#include "holberton.h"
/**
*puts_half - retur the large of a string.
*@str: is a direction of a sting.
*
*/
void puts_half(char *str)
{
	int i = 0, k = 0, n;

	while (*(str + i) != '\0')
	{
		k++;
		i++;
	}

	if (k % 2 == 0)
	{
		n = k / 2;
	}
	else
	{
		n = (k - 1) / 2;
	}

	for (i = n; i <= k; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');

}
