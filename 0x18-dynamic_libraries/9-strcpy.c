#include "main.h"
#include <stdio.h>

/**
 * main: _strcpy - makes a copy of a string
 * a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: address of buffer to copy string to
 * @src: address of string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);

		i++;
	}

		*(dest + i) = '\0';

		return (dest);
}
