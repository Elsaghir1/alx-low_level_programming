#include "main.h"

/**
 * array_range - function that creates an array of integers
 *
 * @min: first input
 * @max: second input
 *
 * Return: Always 0.
*/

int *array_range(int min, int max)
{
	int *ptr, len, i;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
