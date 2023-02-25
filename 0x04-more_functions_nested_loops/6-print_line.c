#include "main.h"



/**
 * print_line - entry point
 *
 * Description: Prints lines
 *@n: number of lines
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	int i;
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
