#include "main.h"

/**
 * reverse_array - function that reverses the content of
 * an array of integers.
 *
 * @a: first input
 * @n: second input
 *
 * Return: Always 0.
*/

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n / 2); i++)
	{
		int tmp = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
