#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: string where the search is made
 * @needle: string whose occurence is searched in haystack
 * Return: pointer to the beginning of the located substring NULL otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
