#include "main.h"

/**
 * print_line - prints straight line n times
 *
 * @n: number of times '_' is printed
 * Return: void
 */

void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n')
}
