#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int x = 0;

	for (; x < 10; x++)
	{
		putchar(x + '0');
		if (x != 9)
		{
		putchar(',');
		}
		putchar(' ');
	}
	return (0);
}
