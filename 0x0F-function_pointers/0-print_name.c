#include "function_pointers.h"

/**
  * print_name - A function that calls asnother one
  * @name: Function parameter
  * @f: Function parameter
  */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
