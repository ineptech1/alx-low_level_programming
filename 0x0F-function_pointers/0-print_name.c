#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_name - Prints a name
  * @name: input the name
  * @f: function pointer to name
  * Return: void.
  */

void print_name(char *name, void (*f)(char *));
{
	if (f != NULL)
		f(name);
}
