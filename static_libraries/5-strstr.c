#include "main.h"
#include <stddef.h>

/**
 * _strstr - returns length of a certain pattern
 * @haystack: string
 * @needle: characters to find
 *
 * Return: length of a given pattern
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, marker;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			marker = i;
			for (j = 0; needle[j]; j++)
			{
				if (needle[j + 1] == '\0')
				{
					return (&haystack[marker]);
				}
			marker++;
			}
		}
	}
	return (0);
}
