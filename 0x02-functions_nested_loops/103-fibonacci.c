#include <stdio.h>
/**
 *main - is function that calcule the first 50 number of fibonanci's serie.
 *
 *Return: 0.
 */
int main(void)
{
	int n1 = 1, n2 = 2, sum = 0, st = 2;

	while (sum <= 4000000)
	{
		sum = n1 + n2;
		if (sum % 2 == 0)
		{
			st = st + sum;
		}
		n1 = n2;
		n2 = sum;
	}
	printf("%d\n", st);
	return (0);
}
