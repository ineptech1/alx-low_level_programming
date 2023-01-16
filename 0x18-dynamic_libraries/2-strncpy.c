#include "main.h"

/**
 * main: _strncpy - copies a string
 * Description: a function that copies a string.
 * Prototype: char *_strncpy(char *dest, char *src, int n);
 * Your function should work exactly like strncpy
 * FYI: The standard library provides a similar function: strncpy.
 * Run man strncpy to learn more.
 * @dest: pointer to the buffer.
 * @src: pointer to the source string.
 * @n: length of src.
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
