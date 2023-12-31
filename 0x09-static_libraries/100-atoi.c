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
	int i = 0, len = 0, neg = 1;
	unsigned int ans = 0;

	while (s[len] != '\0')
		len++;
	for (; i < len; i++)
	{
		if (s[i] == '-')
			neg *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			ans = (ans * 10) + (s[i] - '0');
		else if (ans > 0)
			break;
	}
	return (ans * neg);
}
