#include "main.h"

/**
 * _puts - prints string followed by new line
 * @str: Argument
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
