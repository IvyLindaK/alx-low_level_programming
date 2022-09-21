#include "main.h"
#include <string.h>

/**
 * print_rev - prints string in reverse
 * @s: String argument
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
	{
		_putchar(*(s+len));
	}
}
