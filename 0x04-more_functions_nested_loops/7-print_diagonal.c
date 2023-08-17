#include "main.h"

/**
 * print_diagonal - print digonal line
 *
 * @n: the number of times the \ should be printed
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
			_putchar(92);/*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
