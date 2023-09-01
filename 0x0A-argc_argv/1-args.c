#include <stdio.h>

/**
 * main - function to print the number of arguments
 *
 * @argc: the number of arguments in command-line
 * @argv: vector of string stored the arguments in command-line
 *
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
