#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program entry point
 *
 * description prints \"programming is positive, zero, or negetive
 * returns zero otherwise
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is greater than\n", n);
		printf("%d is positive\n", n);
	}

	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	else if (n < 0)
	{
		printf("%d is less than\n", n);
		printf("%d is zero\n", n);
		return (0);
	}
}
