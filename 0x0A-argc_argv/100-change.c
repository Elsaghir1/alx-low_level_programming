#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: the number of arguments in command-line
 * @argv: vector of string stored the arguments in command-line
 *
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int ans = 0, num = 0, arr[] = { 25, 10, 5, 2, 1};

	if (argc == 2)
	{
		if (atoi(argv[1]) < 0)
			printf("0\n");
		else
		{
			int i;

			num = atoi(argv[1]);
			for (i = 0; i < 5; i++)
			{
				ans += (num / arr[i]);
				num %= arr[i];
			}
			printf("%d\n", ans);
		}
	}
	else
		return (printf("Error\n"), 1);


	return (0);
}
