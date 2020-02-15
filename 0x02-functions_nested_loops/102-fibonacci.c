#include <stdio.h>
/**
 *main - is function that calcule the first 50 number of fibonanci's serie.
 *
 *Return: 0.
 */
int main(void)
{
	long n1 = 1, n2 = 2, sum = 0, i;

	printf("%li, %li, ", n1, n2);

	for (i = 0; i < 48; i++)
	{
		sum = n1 + n2;
		if (i != 47)
		{
			printf("%li, ", sum);
		}
		else
		{
			printf("%li", sum);
		}
		n1 = n2;
		n2 = sum;
	}
	printf("\n");
	return (0);
}
