#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	int Lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	Lastdigit = n % 10;
	printf("Last digit of %d is ", n);
	if (Lastdigit > 5)
	{
		printf("%d and is greater than 5\n", Lastdigit);
	}
	else if (Lastdigit == 0)
	{
		printf("%d and is 0\n", Lastdigit);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", Lastdigit);
	}
	return (0);
}
