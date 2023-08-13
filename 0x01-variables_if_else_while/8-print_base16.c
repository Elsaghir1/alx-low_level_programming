#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: program to print all numbers of base 16
 * Return: Always 0 (success)
 */

int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c++);
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c++);
	}
	putchar('\n');
	return (0);
}
