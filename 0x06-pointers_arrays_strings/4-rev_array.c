#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of integers
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = n - 1; i > n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
