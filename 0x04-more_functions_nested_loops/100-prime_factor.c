#include <stdio.h>
/**
 *main - is a function that calculate the max prime number of a number.
 *
 *@n: integer
 *
 */
int main(void)
{
	long i, j, k = 0, n, pm;
	n = 612852475143;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					k++;
				}
			}
				if (k == 0)
				{
					pm = i;
				}
				k = 0;
		}
	}
	printf("%ld\n", pm);
	return (0);
}
