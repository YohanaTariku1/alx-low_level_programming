#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: first string input
 * @src: second string input
 * @n: number of bytes of dest
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		*(dest + i) = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++
	}
	return (dest);
}
