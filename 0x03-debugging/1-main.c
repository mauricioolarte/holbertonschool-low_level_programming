#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	intf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i); /* i never increase and ever is less than 10*/
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
