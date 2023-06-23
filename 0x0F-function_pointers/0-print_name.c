#include <stdio.h>

/**
 * print_name - prints a name
 * @name: pointer to the char variable
 * @f: function pointer
 * print_char - prints a character
 * main - the main program
 */

void print_name(char *name, void (*f)(char *))
{
	while (*name != '\0')
	{
		f(name);
		name++;
	}
}

void print_char(char *c)
{
	putchar(*c);
}

int main(void)
{
	char name[] = "Becca Atuti";

	print_name(name, print_char);
	return (0);
}
