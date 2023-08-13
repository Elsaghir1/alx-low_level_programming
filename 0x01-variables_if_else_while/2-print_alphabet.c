#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: program to print the lowercase alphabet
 * Return: Always 0 (success)
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i++);
	}
	putchar('\n');
	return (0);
}
