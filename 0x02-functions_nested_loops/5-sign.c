#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number whose sign is printed
 * Return: 0 if n is zero,1 if n is greater than zero,otherwise -1
 */

int print_sign(int n)
{
	if (n > 0)

	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
