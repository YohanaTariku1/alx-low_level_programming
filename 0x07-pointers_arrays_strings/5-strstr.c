#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: source string
 * @needle: searching string
 * Return: new string
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
/**
 * coincidence - define if the string b is inside a
 * @a: source string
 * @b: string to be returned
 * Return: 1 if there is coincidence, 0 otherwise
 */

int coincidence(char *a, char *b)
{
	while (*b && *b == *a)
	{
		b++;
		a++;
	}

	if (*b == '\0')
		return (1);
	else
		return (0);
}
