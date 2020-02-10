#include "_putchar.h"
/**
 * _islower - check if a character is a lowercase.
 * @c: parameter is a int that representa a lowercase.
 * Return: 0 is not lower and 1 is lower.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;
	int c;

	r =  _islower('H');
	_putchar(r + '0');
	r =  _islower('o');
	utchar(r + '0');
	r =  _islower(108);
	utchar(r + '0');

	_putchar('\n');
	return (0);
}
