#include "main.h"

/**
 * main: _puts - Write a function that prints a string, followed by a new line,
 * to stdout.
 * Description: Put the an input string to stdout followed by a new line
 * @str: an input string
 * Return: Nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		i++;
	}
	_putchar('\n');
}
