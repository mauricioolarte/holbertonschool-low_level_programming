#include <stdio.h>
#include <stdlib.h>
/**
*main - calculate the numbers of coins.
*@argc:is a integer.
*@argv: is string.
*Return: 0 when change is negative or 1 when there are two numbers.
*/
int main(int argc, char *argv[])
{
	int mon = 0, i = 0, cents = atoi(argv[1]);
	int coin[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		if (cents > 0)
		{
			while (i < 5)
			{
				if ((cents / coin[i]) == 0)
				{
					i++;
				}
				else
				{
					mon += cents / coin[i];
					cents = cents % coin[i];
					i++;
				}
			}
			printf("%d\n", mon);
			}
			else
			{
				printf("0\n");
			}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (mon);
}
