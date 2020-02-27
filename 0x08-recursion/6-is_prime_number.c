#include "holberton.h"
/**
*mod - potencia.
*@a: integer.
*@b: integer.
*Return: -1 if y is negative.
*/
int mod(int a, int b)
{
	if (b < a)
	{
	if ((a % b) == 0)
		return (0);
	else
		return (mod(a, b + 1));
	}
	else
		return (1);

}

/**
*is_prime_number - calculate a prime number.
*@n: integer.
*Return: sqrt of n.
 */

int  is_prime_number(int n)
{
	if (n == 1 || n == -1)
		return (0);
	if (n == 0)
		return (0);
	return (mod(n, 2));
}
