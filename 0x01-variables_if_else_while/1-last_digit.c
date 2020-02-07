#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, ud;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ud = n % 10;
	if (ud > 5)
	{

		printf("Last digit of %d is %d and is greater than 5\n", n, ud);
	}
	else if (ud == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ud);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and no 0\n", n, ud);
	}

	return (0);
}
