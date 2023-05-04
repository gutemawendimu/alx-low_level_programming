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
unsigned int binary_to_uint(const char *z)
{
	unsigned int k = 1;
	unsigned int y = 0;
	int c;
	unsigned int len;

	if (z == NULL)
		return (0);

	len = _strlen(z);

	for (c = len - 1; c >= 0; c--)
	{
	if (z[c] != '0' && z[c] != '1')
		return (0);
	if (z[c] == '1')
	{
		y += k;
	}
	k *= 2;
}
	return (y);
}
