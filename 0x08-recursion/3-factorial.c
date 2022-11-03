#include "main.h"

/**
 * factorial - prints factorial of a number
 * @n: input integer
 * Return: factorial of a number
 */

int factorial(int n)
{
	int next;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	next = factorial(n - 1);
	return (n * next);
}
