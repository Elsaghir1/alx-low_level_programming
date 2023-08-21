#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 *
 * @str: input from other function
 *
 * Return: Always 0.
*/

void puts_half(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	i /= 2;
	while (str[i])
		_putchar(str[i]), i++;
	_putchar('\n');
}
