#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: Argument to function
 * Return: Always 0
 */

void print_times_table(int n)
{
	int dig, mul, res;

	if (n <= 15 && n >= 0)
	{
		for (dig = 0; dig <= n; dig++)
		{
			_putchar('0');

			for (mul = 1; mul <= n; mul++)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				res = dig * mul;
				if (res >= 100)
				{
					_putchar((res / 100) + '0');
					_putchar((res / 10) % 10 + '0');
				}
				else if (res <= 99 && res >= 10)
				{
					_putchar((res / 10) + '0');
				}
				_putchar((res % 10) + '0');
				_putchar('\n');
			}
		}
	}
}
