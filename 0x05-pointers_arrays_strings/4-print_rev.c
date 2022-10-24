#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int o = 0;

	while (s[o] != '\0')
		o++;
	for (o = o - 1; o >= 0; o--)
		_putchar(s[o]);

	_putchar('\n');
}
