#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *print_binary - convert integer to binary.
 *@n: is a interger.
 */

void print_binary(unsigned long int n)
{
	unsigned int c;

	if (n != 0)
	{
		print_binary(n >> 1);
		c = n - ((n >> 1) * 2);
		_putchar(c + '0');
	}
}
