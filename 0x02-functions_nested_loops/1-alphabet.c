#include "main.h"

/**
 * main - Entry point
 * Description: program to print all alphabet
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
