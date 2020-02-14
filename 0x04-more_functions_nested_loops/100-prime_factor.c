#include <stdio.h>
/**
 *main - is a function that calculate the max prime number of a number.
 *
 *
 *Return: valor 0.
 */
int main(void)
{
	long i, j, k = 0, n, pm;

	n = 4019;

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
				n = n / pm;
		}
	}
	printf("%ld\n", pm);
	return (0);
}
