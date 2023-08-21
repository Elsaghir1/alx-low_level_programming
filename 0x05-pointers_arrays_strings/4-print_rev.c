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
	int i = 0;

	while (s[i])
		i++;

	char *c = s + i - 1;

	while (c >= s)
	{
		_putchar(*c + 0);
		c--;
	}
	_putchar('\n');
}
