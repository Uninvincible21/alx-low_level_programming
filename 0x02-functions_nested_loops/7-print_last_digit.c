#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (n < 0)
	{
		n = -n;
	}

	_putchar(ld + '0');

	return (ld);
}
