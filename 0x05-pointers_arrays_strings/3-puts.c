#include "main.h"

/**
 * _puts - Prints a string, followed by a new line
 * @str: A pointer to a character
 */

void _puts(char *str)
{
	int i = 0;
	
	if (str == NULL)
	{
		return;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
