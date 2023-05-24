#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @i: The number
 * Return: The value of the digit
 */

int print_last_digit(int i)
{
	int num = i % 10;

	_putchar('T');
	_putchar('h');
	_putchar('e');
	_putchar(' ');
	_putchar('l');
	_putchar('a');
	_putchar('s');
	_putchar('t');
	_putchar(' ');
	_putchar('d');
	_putchar('i');
	_putchar('g');
	_putchar('i');
	_putchar('t');
	_putchar(' ');
	_putchar('i');
	_putchar('s');
	_putchar(':');
	_putchar(' ');
	_putchar('0' + num);
	_putchar('\n');
	return (num);
}
