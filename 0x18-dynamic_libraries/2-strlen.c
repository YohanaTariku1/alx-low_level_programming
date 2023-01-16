#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: pointer to char
 * Return: Always length of a string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
