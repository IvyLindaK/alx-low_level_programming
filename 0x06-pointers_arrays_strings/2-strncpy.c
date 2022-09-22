#include "main.h"

/**
 * strncpy - copies a string
 * @dest: destination buffer
 * @src: source buffer
 * @n: integer argument
 * Return: new dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
