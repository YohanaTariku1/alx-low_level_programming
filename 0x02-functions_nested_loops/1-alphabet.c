#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

void print_alphabet(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
