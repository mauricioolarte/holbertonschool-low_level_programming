#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *clear_bit - convert integer to binary.
 *@n: is a interger.
 *@index: number to print.
 *Return: index.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (*n == '\0')
		return (-1);
	if (index > 32)
		return (-1);
	if ((*n & (1 << index)) != 0)
		*n = *n ^ (1 << index);

	return (1);

}
