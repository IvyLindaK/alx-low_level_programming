#include "main.h"

/**
 * print_most_numbers - prints number 0 to 9 except 2 and 4
 * Return: Always 0
 */

void print_more_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if ((n != 2) || (n != 4))
		{
			_putchar(n);
		}
		_putchar (n);
	}
}
