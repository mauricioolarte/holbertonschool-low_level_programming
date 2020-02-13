#include <stdio.h>
/**
 *main - priint number from 0 to 100.
 *
 *Return: always 0.
 */
int main(void)
{
	int m3, m5, i;

	for (i = 1; i <= 100; i++)
	{
		m3 = i % 3;
		m5 = i % 5;
		if (m3 == 0 && m5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (m3 == 0)
		{
			printf("Fizz ");
		}
		else if (m5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
		printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
