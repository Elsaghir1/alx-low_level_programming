#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: program to print all combinations of two digit numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int f = 0, s = 0;

	while (f <= 99)
	{
		s = f;
		while (s <= 99)
		{
			if (s != f)
			{
				putchar('0' + (f / 10));
				putchar('0' + (f % 10));
				putchar(' ');
				putchar('0' + (s / 10));
				putchar('0' + (s % 10));
				if (f != 98 || s != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			s++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}
