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
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('0');
	}
	else 
	{
		return (0);
		_putchar('-');
	}
}
