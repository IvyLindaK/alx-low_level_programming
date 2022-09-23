#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination buffer
 * @src: source buffer
 * @n: integer argument
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
	{
		j++;
	}
	while (src[i] && i < n)
	{
		dest[j++] = src[i];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
