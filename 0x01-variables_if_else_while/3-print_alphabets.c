#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: program to print the lowercase and uppercase of alphabet
 * Return: Always 0 (success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c++);
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c++);
	}
	putchar('\n');
	return (0);
}
