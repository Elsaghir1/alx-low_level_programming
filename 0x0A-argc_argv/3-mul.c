#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to multiplies two numbers
 *
 * @argc: the number of arguments in command-line
 * @argv: vector of string stored the arguments in command-line
 *
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
	(void)argc;

	if (argc == 3)
	{
		int ans = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", ans);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
