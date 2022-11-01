#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes character c to standout
 * @c: char to be printed out
 * Return: On success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
