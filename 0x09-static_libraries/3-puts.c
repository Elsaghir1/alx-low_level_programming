#include "main.h"

/**
 * _puts - print the string follwed by a new line
 *
 * @str: input from other function
 *
 * Return: Always 0.
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
