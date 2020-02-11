#include <stdio.h>
/**
 *print_to_98 - print all number to 98.
 *
 *@n: is integer.
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
			printf("%d", n);
			}
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		}
	}
	printf("\n");
}
