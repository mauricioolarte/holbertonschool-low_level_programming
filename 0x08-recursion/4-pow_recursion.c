#include "holberton.h"
/**
*_pow_recursion - potencia.
*@x: integer.
*@y: integer.
*Return: -1 if y is negative.
*/
int _pow_recursion(int x, int y)
{
	long int pot;

	if (y < 0)
		return (-1);
	if (y == 0)
	return (1);
	pot = x * x;
	y--;
	if (y > 1)
	{
	pot = x * _pow_recursion(x, y);
	}
	return (pot);
}
