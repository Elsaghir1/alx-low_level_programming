#include "main.h"

/**
 * print_triangle - to print triangle
 *
 * @size: input from other function
 *
 * Return: Always 0 (success)
*/

void print_triangle(int size)
{
	int i, sp, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (sp = 1; sp <= (size - i); sp)
				_putchar(' ');
			for (j = 1; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
