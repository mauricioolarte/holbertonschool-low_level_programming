#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *print - print a binary.
 *@b: is a integer.
 */

void print(unsigned long int b)
{
	unsigned int c;

	if (b != 0)
	{
		print(b >> 1);
		c = b - ((b >> 1) * 2);
		_putchar(c + '0');
	}
}


/**
 *print_binary - convert integer to binary.
 *@n: is a interger.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print(n);
}
