#include "main.h"

/**
 * *_strcat - function that concatenates 2 strings
 * @dest: first string input
 * @src: second string input
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
