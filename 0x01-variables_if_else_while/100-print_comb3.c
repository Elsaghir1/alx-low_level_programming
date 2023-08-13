#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: program to print all combinations of two digit
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = i + 1;

		while (j <= 9)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i + j != 17)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
