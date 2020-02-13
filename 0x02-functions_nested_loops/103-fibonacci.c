#include <stdio.h>
/**
 *main - is function that calcule the first 50 number of fibonanci's serie.
 *
 *Return: 0.
 */
int main(void)
{
	long n1 = 1, n2 = 2, sum = 0, i;

	printf("%ld, %ld", n1, n2);
	while ((n1 + n2) <= 4000000)
	{
		sum = n1 + n2;
		printf(", %ld", sum);
		n1 = n2;
		n2 = sum;
	}
	printf("\n");
	return (0);
}
