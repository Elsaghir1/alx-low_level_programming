#include "main.h"

/**
 * print_name - function that prints a name.
 *
 * @name: first input
 * @f: second input
 *
 * Return: Always 0.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
