#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int and updates the value it points to to 98
 * @*n - Pointer n
 * Return: Always 0
 */

void reset_to_98(int *n);
{
	int *p;
	p = &n;
	*p = 98;
}