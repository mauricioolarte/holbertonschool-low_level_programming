#include "_putchar.h"
#include <stdio.h>
/**
 *_abs - this function calculate the absolute valor of a number.
 *
 * @n: is a integer.
 *
 * Return: absolute valor of a number.
 */

int _abs(int n)
{
	if (n > 0)
	{
		printf("%d\n", n);
	}
	else if (n == 0)
	{
		printf("%d\n", n);
	}
	else
	{
		n = n * (-1);
		printf("%d\n", n);
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
