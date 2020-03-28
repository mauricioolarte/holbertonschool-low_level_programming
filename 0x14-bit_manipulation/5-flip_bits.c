#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *countSetBits - count the bit to change
 *@n: is integer.
 *Return: count.
 */
int countSetBits(unsigned long int n)
{
	int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}

/**
 *flip_bits - count the bit to flip a to b.
 *@n: integer
 *@m: integer
 *Return: integer.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	if (n == m || (n == 0 && m == 0))
		return (0);
	return (countSetBits(n ^ m));
}
