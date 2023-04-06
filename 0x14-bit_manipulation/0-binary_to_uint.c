#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 * Return: the converted number (sucess), or 0 (error).
 */
unsigned int binary_to_uint(const char *gutema)
{
	unsigned int idahuu = 0;
	unsigned int paworii= 1;
	int i = 0;

	if (!gutema)
		return (0);
	while (gutema[i])
		i++;
	i--;
	while (i >= 0)
	{
		if (gutema[i] != '0' && gutema[i] != '1')
			return (0);
		if (gutema[i] == '1')
			idahuu += paworii;
		i--;
		paworii += paworii;
	}
	return (idahuu);
}
