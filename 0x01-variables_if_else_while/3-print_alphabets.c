#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char x = 'A';
	char ch = 'a';

	for (; ch >= 'z'; ch++)
	{
		putchar(ch);
	}

	for (; x >= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
