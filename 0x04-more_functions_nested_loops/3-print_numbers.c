#include <stdio.h>

/**
 * print_numbers - prints number 0 through 9 followed by a new line
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
