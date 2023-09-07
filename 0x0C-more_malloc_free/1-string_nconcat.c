#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: first input
 * @s2: second input
 * @n: third input
 *
 * Return: Always 0.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_len = 0, s2_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	str = malloc(s1_len + n + 1);
	if (str == 0)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; i++)
		str[i++] = s2[j];

	str[i] = '\0';
	return (str);
}
