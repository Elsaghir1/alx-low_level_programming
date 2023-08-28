#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: first input
 * @size: second input
 *
 * Return: Always 0.
*/

void print_diagsums(int *a, int size)
{
	int i, l = 0, r = size - 1, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[l++];
		sum2 += a[r--];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
