#include "main.h"

/**
 * _isdigit - checks if input is between 0 and 9
 * @c: input digit
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
