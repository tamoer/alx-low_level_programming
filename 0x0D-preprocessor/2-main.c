#include <stdio.h>

/**
 * main - prints the name of a file it was compiled from
 * Return: always 0 (Success)
 */

int main(void)
{
	char filename[] = __FILE__;
	int i = 0;

	while (filename[i] != '\0')
	{
		putchar(filename[i]);
		i++;
	}
	putchar('\n');
	return (0);

}
