#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first integer input
 * @b: second integer input
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
