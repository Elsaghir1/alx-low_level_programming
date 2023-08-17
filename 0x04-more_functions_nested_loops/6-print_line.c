#include "main.h"

/**
 * print_line - print n numbers from _
 *
 * @n: input from other function
 *
 * Return: n numbers from _
*/

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
