#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lower case followed by a new line
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
