#include "main.h"

/**
 * print_diagonal - prints diagonal line n times
 * @n: input integer
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\');
		}
	}
	_putchar('\n');
}
