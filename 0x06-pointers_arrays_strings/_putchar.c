#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes character c to stdout in the file
 * @c: char to be printed out
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
