#include "main.h"
/**
 * *_strstr - Locates a substring
 *
 * @haystack: char string
 * @needle: char string
 *
 * Return: char pointer or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				return (&haystack[j]);
			}
		}
	}
	return ('\0');
}
