#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 * Return: 0 (Success)
 */

int main()
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}