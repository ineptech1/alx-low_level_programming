#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Program entry point
 * Return: 0 no error, non zero value if there is error
**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		print("%d is positive\n", n);
	}
	else if (n < 0)
	{
		print("%d is zero\n", n);
		return (0);
	}
}
