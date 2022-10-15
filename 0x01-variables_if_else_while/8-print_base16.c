#include <stdio.h>
/**
 * main -Entry
 * Return: Always 0
 */
int main(void)
{
	int x = 0;
	char ch = 'A';

	for (; x < 10; x++)
	{
		putchar(x + '0');
	}
	for (; ch <= 'F'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
