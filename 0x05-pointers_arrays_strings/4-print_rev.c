#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line
 * @s: Pointer to a character
 */

void print_rev(char *s)
{
	int l = 0;
	int i;

	if (s == NULL)
	{
		return;
	}
	while (s[l] != '\0')
	{
		l++;
	}
	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
