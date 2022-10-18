#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10 times the alphabets
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
		putchar(ch);
		}
		i++;
		putchar('\n');
	}
}
