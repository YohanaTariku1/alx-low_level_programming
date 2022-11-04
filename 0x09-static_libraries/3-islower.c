#include "main.h"

/**
 * _islower - checks if char is lower
 * @c: character to be verified
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
