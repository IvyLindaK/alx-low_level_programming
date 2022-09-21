#include "main.h"

/**
 * rev_string - reverses string
 * @s: String argument
 */

void rev_string(char *s)
{
	int i;
	int temp;
	int len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i -1) = temp;
	}
}

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
