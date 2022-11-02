#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes character c to stadout
 * @c: char to be printed out
 * Return: on succes
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
