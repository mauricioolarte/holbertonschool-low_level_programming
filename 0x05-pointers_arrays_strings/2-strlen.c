#include <stdio.h>
/**
 *_strlen - retur the large of a string.
 *@s: is a direction of a sting.
 */
int _strlen(char *s)
{
	int i;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
