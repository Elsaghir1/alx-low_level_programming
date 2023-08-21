#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 *
 * @s: input from other function
 *
 * Return: Always 0.
*/

void print_rev(char *s)
{
	char *c = s + strlen(s) - 1;

	while (c >= s)
	{
		_putchar(*c + 0);
		c--;
	}
	_putchar('\n');
}
