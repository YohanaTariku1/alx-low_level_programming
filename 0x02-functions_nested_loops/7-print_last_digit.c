#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @x: integer input
 * Return: last value of integer
 */
int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (y < 0)
	{
		y = -1 * y;
	}

	_putchar(y + '0');
	return (y);
}
