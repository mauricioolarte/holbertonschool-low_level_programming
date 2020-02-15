#include <stdio.h>
/**
 *main - make the sum of multiples of 3 or 5 bellow 1024.
 *
 *
 *Return: sum;
 *
 */

int main(void)
{
	int n, sum1;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum1 += n;
		}
	}
		printf("%d\n", sum1);
		return (0);
}
