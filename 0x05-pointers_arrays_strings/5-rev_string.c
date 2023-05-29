#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to a character
 */

void rev_string(char *s)
{
	int l = 0;
	int i = 0;
	int j;
	char c;

	if (s == NULL)
	{
		return;
	}
	while (s[l] != '\0')
	{
		l++;
	}
	j = l - 1;

	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
}
