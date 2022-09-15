#include "main.h"

/**
 * print_sign - prints the sign of the number
 * @n: argument of function
 * Return: 1 if greater than zero, 0 if zero, -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
