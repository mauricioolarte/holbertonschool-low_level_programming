#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *binary_to_uint - convert binary in integer.
 *@b: is char.
 *Return: sum.
 */

unsigned int binary_to_uint(const char *b)
{
	int count = 0, mul = 0, sum = 0, c;

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
