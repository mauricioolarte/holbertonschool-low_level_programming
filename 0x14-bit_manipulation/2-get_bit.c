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
	unsigned int c, nueindex, i, j;
	char *p;

	c = n;
	while (n > 0)
	{
		n = n / 2;
		i++;
	}
	p = (char *)malloc(sizeof(char) * i);
	if (p == NULL)
	{
		free(p);
		return (-1);
	}
	for (j = i; j > 0; j--)
	{
		p[j] = c % 2;
		c = c / 2;
	}

	nueindex = i - index;
	return (p[nueindex]);
}
