#include "main.h"

/**
 * main: _strncat - concatenates n bytes of two strings
 * Description: a function that concatenates two strings.
 * Prototype: char *_strncat(char *dest, char *src, int n);
 * The _strncat function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 *  Return: void (return a pointer to the resulting string dest)
 */

char *_strncat(char *dest, char *src, int n)
{
int dest_len, i;

for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)

;
for (i = 0; i < n && src[i] != '\0'; i++)

	dest[dest_len + i] = src[i];

dest[dest_len + i] = '\0';

return (dest);
}
