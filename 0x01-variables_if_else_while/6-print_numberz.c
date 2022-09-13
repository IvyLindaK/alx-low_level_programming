#include <stdio.h>
/**
 * main - prints all single digit numbers upto 10 using putchar
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
