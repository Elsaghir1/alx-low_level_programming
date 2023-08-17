#include "main.h"

/**
 * print_diagonal - print digonal of n numbers of \
 *
 * @n: input from other function
 *
 * Return: n numbers of \
*/

void print_diagonal(int n)
{
	int i, sp;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (sp = 1; sp <= i; sp++)
				_putchar(' ');
			_putchar('\');
			_putchar('\n');
		}
	}
}
