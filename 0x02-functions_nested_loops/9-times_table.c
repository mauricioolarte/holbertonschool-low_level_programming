#include "holberton.h"
/**
 *times_table - print tables.
 *
 *Return: always 0.
 *
 */
void times_table(void)
{
	int a, b, d, u, n;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			n = a * b;
			d = n / 10;
			u = n % 10;
			if (b == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			else if (n >= 0 && n <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(u + '0');
				if (b != 9)
				{
				_putchar(',');
				}
			}
			else if (n > 9)
			{
				_putchar(' ');
				_putchar(d + '0');
				_putchar(u + '0');
				if (b != 9)
				{
					_putchar(',');
				}
			}
		}
		_putchar('\n');
	}

}
