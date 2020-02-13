#include "holberton.h"
/**
 *more_numbers - this function print 10 times number from 0 to 14.
 *
 */
void more_numbers(void)
{
	int j, i = 0, k = 48;

	for (j = 0; j <= 10; j++)
	{
		while (i < 15)
		{
			if (i >= 10)
			{
				_putchar(49);
			}
			_putchar(k);
			k++;
			if (i == 9)
			{
				k = 48;
			}
			i++;
		}
		k = 48;
		i = 0;
		_putchar('\n');
	}
}
