#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @x: Array of integers
 * @n: Number of elements of the array to be printed
 * Return: void
 */

void print_array(int *x, int n)

{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", x[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
