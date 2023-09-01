#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to summation the numbers
 *
 * @argc: the number of arguments in command-line
 * @argv: vector of string stored the arguments in command-line
 *
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int i, ans = 0;

	for (i = 1; i < argc; i++)
	{
		char *c;

		c = argv[i];
		while (*c != '\0')
		{
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
			c++;
		}
		ans += atoi(argv[i]);
	}
	printf("%d\n", ans);

	return (0);
}
