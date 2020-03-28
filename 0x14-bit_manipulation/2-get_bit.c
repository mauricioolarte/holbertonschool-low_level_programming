#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *get_bit - convert integer to binary.
 *@n: is a interger.
 *@index: number to print.
 *Return: index.
 */

int get_bit(unsigned long int n, unsigned int index)
{

	long int tem, ret;

	if (index > 32)
		return (-1);
	tem = n & (1 << (index));
	if (tem == (1 << (index)))
		ret = 1;
	else
		ret = 0;
	return (ret);
}
