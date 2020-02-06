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

	for (b = 'a'; b <= 'z'; b++)
	{
	putchar (b);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
	putchar (c);
	}
	putchar ('\n');
	return (0);
}
