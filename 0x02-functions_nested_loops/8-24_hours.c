#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: Always 0
 */

void jack_bauer(void)
{
	int t;

	for (t = '00:00'; t <= '23:59'; t++)
	{
		_putchar(t);
	}
	_putchar('\n');
}
