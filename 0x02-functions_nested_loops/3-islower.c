#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: Argument of teh function
 * Return: 1 if success, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
