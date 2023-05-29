#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to a charachter
 * Return: 0 if s is NULL, otherwise l
 */

int _strlen(char *s)
{
	int l = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
