#include "main.h"

/**
 * main - Entry point
 * Description: program to print all alphabet
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c < 'z'; c++)
		_putchar(c);
	_putchar('\n');
	return (0);
}
