#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;
	int c;

	for (b = '0'; b <= '9'; b++)
	{
	for (c = '0'; c <= '9'; c++)
	{
	if (b < c && b != c)
	{
	putchar (b);
	putchar (c);
	if (b != '8' || c != '9')
	{
	putchar (',');
	putchar (' ');
	}
	}
	}
	}
	putchar ('\n');
	return (0);
}
