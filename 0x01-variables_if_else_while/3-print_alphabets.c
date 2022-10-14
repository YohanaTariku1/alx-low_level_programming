#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{

	for (char ch = 'a'; ch >= 'z'; ch++)
	{
		putchar(ch);
	}

	for (char x = 'A'; x >= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
