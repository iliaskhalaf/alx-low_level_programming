#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n: integer to be printed.
 */

void print_number(int n)
{
	/*first check if it's negative*/
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/*print the first few digits*/
	if ((n / 10) > 0)
		print_number(n / 10);

	/*print the last digit*/
	_putchar((n % 10) + 48);
}
