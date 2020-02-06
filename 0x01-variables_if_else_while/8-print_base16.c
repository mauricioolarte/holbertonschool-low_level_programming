#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b;
	char c;

	for (b = '0'; b <= '9'; b++)
	{
	putchar (b);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
	putchar (c);
	}
	putchar ('\n');
	return (0);
}
