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
	int d;
	int e;

	for (b = '0'; b <= '9'; b++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			for (d = '0'; d <= '9'; d++)
			{
			for (e = '0'; e <= '9'; e++)
			{
			if (b <= d && c < e)
			{
			putchar (b);
			putchar (c);
			putchar (' ');
			putchar (d);
			putchar (e);
			if (b == '9' && c == '8' &&  d == '9' && e == '9')
			{
			break;
			}
			putchar (',');
			putchar (' ');
			}
			}
			}
		}
	}
	putchar ('\n');
	return (0);
}
