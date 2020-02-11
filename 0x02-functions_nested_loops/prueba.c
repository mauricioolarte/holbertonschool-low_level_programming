#include "_putchar.h"

int print_last_digit(int n)
{
	int last_digit;

        last_digit = n % 10;
	_putchar(last_digit);
        return (last_digit);
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r, last_digit;
int n;
		print_last_digit(98);
		_putchar(last_digit);

		return (0);
	}
