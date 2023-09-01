#include <stdio.h>

/**
 * main - function to print all arguments
 *
 * @argc: the number of arguments in command-line
 * @argv: vector of string stored the arguments in command-line
 *
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
