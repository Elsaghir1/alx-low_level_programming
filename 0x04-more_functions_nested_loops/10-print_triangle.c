#include "main.h"

/**
 * print_triangle - to print triangle
 *
 * @size: input from other function
 *
 * Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int i, sp;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (sp = 1; sp <= size; sp++)
			{
				if (i + sp <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
