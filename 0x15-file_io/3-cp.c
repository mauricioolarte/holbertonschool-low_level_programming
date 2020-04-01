#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
/*	int res;*/

	if (ac != 3)
	{
		dprintf(2, "Usage: %s %s\n", av[1], av[2]);
		exit(97);
	}
/*	res = append_text_to_file(av[1], av[2]);
	printf("-> %i)\n", res);*/
	printf("%c%c", av[0][2], av[0][3]);
	if (av[0][2] != 'c' || av[0][3] != 'p' || av[0][4] != '\0')
		exit(0);
	else
		printf("no");
	return (0);
}
