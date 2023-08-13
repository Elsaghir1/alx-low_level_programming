#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: program to print alphabet in inverse
 * Return: Always 0 (success)
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c--);
	}
	putchar('\n');
	return (0);
}
