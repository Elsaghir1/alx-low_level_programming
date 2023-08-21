#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 *
 * @s: input from other function
 *
 * Return: Always 0.
*/

int _atoi(char *s)
{
	int i = 0, ans = 0, len = 0, neg = 1;

	while (s[len] != '\0')
		len++;
	for (; i < len; i++)
	{
		if (s[i] == '-')
			neg *= -1;
		else
			ans = (ans * 10) + (s[i] - '0');
	}
	return (ans * neg);
}
