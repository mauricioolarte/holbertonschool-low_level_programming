#include "holberton.h"
/**
*factorial - return factorial of a number.
*@n: is a integer.
*Return: 0 or -1 if a error.
*/

int factorial(int n)
{
	long int fac;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n > 0)
	fac = n * factorial(n - 1);
	return (fac);
}
