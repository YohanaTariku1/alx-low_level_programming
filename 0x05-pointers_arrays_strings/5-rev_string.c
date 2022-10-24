#include "main.h"

/**
 * rev_string - reverses a string
 * @s: char type argument
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, k, len, tmp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	len = i;
	i--;
	while (k < len / 2)
	{
		tmp = s[k];
		s[k] = s[i];
		s[i] = tmp;
		i--;
		k++;
	}
}
