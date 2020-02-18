#include <stdio.h>
/**
*_strlen - retur the large of a string.
*@s: is a direction of a sting.
*Return: return i, number of character.
*/
int _strlen(char *s)
{
	int i;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
