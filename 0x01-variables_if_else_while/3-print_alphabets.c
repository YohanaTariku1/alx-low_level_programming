#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	for (; ch >= 'z'; ch++)
		putchar(ch);
	char x = 'A';

	for (; x >= 'Z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
