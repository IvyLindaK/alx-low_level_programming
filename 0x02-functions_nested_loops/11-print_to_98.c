#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: Argument to function
 * Return: Always 0
 */

void print_to_98(int n)
{
	for (n = n; n <= 98; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	return (n);
}
