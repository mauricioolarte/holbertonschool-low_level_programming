#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *binary_to_uint2 - convert binary in integer.
 *@b: is char.
 *Return: sum.
 */

unsigned int binary_to_uint2(char *b)
{
	int count = 0, mul = 0, sum = 0, c;

	if (b == NULL)
		return (0);
	while (b[count] != '\0')
		count++;
	c = count;
	while (count > 0)
	{
		if (count == c)
			mul = 1;
		else
			mul = mul * 2;
		if (b[count - 1] != '0' && b[count - 1] != '1')
			return (0);
		if (b[count - 1] == '1')
		{
			sum = sum + mul;
		}
		count--;
	}
	return (sum);
}


/**
 *flip_bits - convert integer to binary.
 *@n: is a interger.
 *@m: number to print.
 *Return: index.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c, nueindex, i, j;
	char *p;

	c = n;
	while (n)
	{
		n = (n / 2);
		i++;
	}
	if (m > i)
		i = m;
	p = (char *)malloc(sizeof(char) * (i - 1));
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

	nueindex = i - (m + 1);
	p[nueindex] = 1;
	return (1);
}
