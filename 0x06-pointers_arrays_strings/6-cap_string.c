#include "main.h"

/**
 * check -  function that capitalizes all words of a string.
 *
 * @c: input
 *
 * Return: Always 1 or 0.
*/

bool check(char c)
{
	char s[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
			return (true);
	}
	return (false);
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
	int i;
	bool flag = true;
	char *p = str;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (check(str[i]))
			flag = true;
		else if (str[i] >= 97 && str[i] <= 122 && flag)
			str[i] -= 32, flag = false;
		else
			flag = false;
	}
	return (p);
}
