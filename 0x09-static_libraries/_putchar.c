#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 * Description: program to print all numbers of base 10
 * Return: 1 on success.
 * 	on error -1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
