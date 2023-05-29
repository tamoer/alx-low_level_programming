#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: Pointer to a character
 */

void puts_half(char *str)
{
	int l = 0;
	int i = 0;
	int j;

	if (str == NULL)
	{
		return;
	}
	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
		j = l / 2;
	}
	else
	{
		j = (l - 1) / 2;
	}
	for (i = j; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
