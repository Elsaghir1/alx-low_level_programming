#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 ten times
 *
 * Return: numbers of 0 to 14 ten times
*/

void more_numbers(void)
{
	int i, num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			int r = num;

			if (num > 9)
			{
				_putchar('1');
				r = num % 10;
			}
			_putchar(r + 48);
		}
		_putchar('\n');
	}
}
