#include "main.h"

/**
 * _strlen - lenght of string
 * @s:char
 * Return:int
 */
int _strlen(const char *x)
{
	int y;
	for (y = 0; x[y] != '\0'; y++)
		{
			continue;
		}
return (y);
}
/**
 * binary_to_uint - convert binary to unsigned int
 * @b:string from 0 and 1 else NULL
 *
 * Return:unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int y = 0;
	int c;
	unsigned int len;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (c = len - 1; c >= 0; c--)
	{
	if (b[c] != '0' && b[c] != '1')
		return (0);
	if (b[c] == '1')
	{
		y += k;
	}
	k *= 2;
}
	return (y);
}
