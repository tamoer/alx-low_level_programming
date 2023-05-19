#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	if (i == 9)
	{
		putchar('\n');
	}
	return (0);
}
