#include "main.h"

/**
 * more_numbers - prints numbers 10 times
 */

void more_numbers(void)
{
	int i;
	int l;

	for (l = 0; l < 9;)
	{
		for (i = 0; i <= 14;)
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			else
			{
				_putchar(i + '0');
			}
		_putchar('\n');
	}
}
