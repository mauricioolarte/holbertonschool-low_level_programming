#include <stdio.h>
/**
 *get_endianness - get indianness
 *Return: 0 0r 1.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	int ret;

	char *c = (char *)&i;

	if (*c)
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}

	return (ret);
}
