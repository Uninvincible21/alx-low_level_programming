#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 & 4
 *
 * Return: noting on success
 */

void print_most_numbers(void)
{
	int start = 0, end = 9;

	while (start <= end)
	{
		if (start != 2 && start != 4)
			_putchar(start + '0');
		start++;
	}
	_putchar('\n');
}
