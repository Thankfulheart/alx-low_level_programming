#include "main.h"

/**
 * print_square - Prints n squares according to n number of times
 * @size: The number of squares/number of times
 * Return: empty
 */

void print_square(int size)

{
	int y, z;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (y = 0; y < size; y++)
	{
	for (z = 0; z < size; z++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
