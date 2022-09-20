#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: Arguments of function
 * Return: Returns length of string
 */

int _strlen(char *s)
{
	int len =0;

	while (s[len] != '\0')
	{
		_putchar(len);
		len++;
	}
		return (len);
}
