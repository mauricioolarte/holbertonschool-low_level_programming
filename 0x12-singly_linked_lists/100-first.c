#include <stdio.h>
#include <stdlib.h>

/**
 *printbeforeMain - print before main.
 */
void printbeforeMain(void) __attribute__ ((constructor));
void printbeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore  my house upon my back!\n");
}
