#include "main.h"

/**
 * check -  function that capitalizes all words of a string.
 *
 * @c: input
 *
 * Return: Always 1 or 0.
*/

int check(char c)
{
	char s[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; i < 12; i++)
	{
		if (c == s[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string -  function that capitalizes all words of a string.
 *
 * @str: input from other function
 *
 * Return: Always 0.
*/

char *cap_string(char *str)
{
	int flag = 1;
	char *p = str;

	while (*str)
	{
		if (check(*str))
			flag = 1;
		else if (*str >= 97 && *str <= 122 && flag)
		{
			*str -= 32;
			flag = 0;
		}
		else
			flag = 0;
		str++;
	}
	return (p);
}
