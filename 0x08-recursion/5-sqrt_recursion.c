#include "holberton.h"
/**
*pot - potencia.
*@a: integer.
*@b: integer.
*Return: -1 if y is negative.
*/
int pot(int a, int b)
{
	if (b < a)
	{
	if ((b * b) != a)
		return (pot(a, b + 1));
	else
		return (b);
	}
	else
		return (-1);

}

/**
*_sqrt_recursion - calculate a sqrt.
*@n: integer.
*Return: sqrt of n.
 */

int  _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (pot(n, 1));
}
