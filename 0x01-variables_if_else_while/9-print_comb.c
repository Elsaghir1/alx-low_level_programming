#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: program to print all combinations of single digit
 * Return: Always 0 (success)
 */

int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar('0' + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
