#include "main.h"

/**
 * more_numbers - prints 0 through 14 ten times followed by a new line
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		int i;

		for (i = 0; i < 15; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
