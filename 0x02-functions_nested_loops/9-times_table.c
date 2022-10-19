#include "main.h"
/**
 * times_table - prints out nine times table
 * r = row, c = column, d = digits of current result
 * Return: times table
 * add extra space
 */
void times_table(void)
{
	int r, c, d;

	for (r = 0; r < 10; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= 9; c++)
		{
			d = r * c;
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		putchar('\n');
	}
}
