#include <stdio.h>
/**
 *main - is function that calcule the first 50 number of fibonanci's serie.
 *
 *Return: 0.
 */
int main(void)
{
	long n1 = 1, n2 = 2, sum = 0, i;

	printf("%ld, %ld, ", n1, n2);

	for (i = 0; i < 50; i++)
	{
		sum = n1 + n2;
		if (i != 49)
		{
			printf("%ld, ", sum);
		}
		else
		{
			printf("%ld", sum);
		}
		n1 = n2;
		n2 = sum;
	}
	printf("\n");
	return (0);
}
