#include <stdio.h>
#include <stdlib.h>

/**
 *printbeforeMain - print before main.
 *Return: cero.
 */
int printbeforeMain(void) __attribute__ ((constructor));
int printbeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore  my house upon my back!\n");
	return (0);
}
