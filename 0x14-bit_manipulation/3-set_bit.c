#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *set_bit - convert integer to binary.
 *@n: is a interger.
 *@index: number to print.
 *Return: index.
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (*n == '\0')
		return (-1);
	*n = *n | (1 << index);
	return (1);


}
