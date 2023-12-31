#include "main.h"

/**
 * _strstr - function that locates a substring.
 *
 * @haystack: first input
 * @needle: second input
 *
 * Return: Always 0.
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		int flag = 1;

		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j] || haystack[i + j] == '\0')
			{
				flag = 0;
				break;
			}
		}
		if (flag)
			return (haystack + i);
	}
	return ('\0');
}
