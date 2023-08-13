#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: program to print all combinations of three digit
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
			int k = j + 1;

			while (k <= 9)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i + j + k != 24)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
