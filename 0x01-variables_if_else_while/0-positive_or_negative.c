#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* is for calculate if ramdpn is negative or positive*/
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int p=n;

	if (p < 0)
	{
		printf("%d is negative\n", p);
	}
	else if (p == 0)
	{
		printf("%d is zero\n", p);
	}
	else
	{
		printf("%d is positive\n", p);
	}
	return (0);
}
