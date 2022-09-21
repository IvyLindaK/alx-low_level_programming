#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: String argument
 */

void puts_half(char *str)
{
	int i;
	int len = _strlen(str);
	
	for (i = ((len - 1) / 2) + 1; i < len; i++)
	{
		_putchar(*(str + i));
		_putchar(10);
	}
}

/**
 * _strlen - returns length of string
 * @s: String argument
 * Return: Returns length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
