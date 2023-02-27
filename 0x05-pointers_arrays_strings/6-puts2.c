#include "main.h"
/**
 * puts2 - Write a function that prints a string, followed by a new line, to
 * stdout.
 *
 * @s: This is my input string
 *
 */

void puts2(char *s)
{
int a;
for (a = 0; s[a] != '\0'; a++)
{
if (a % 2 == 0)
{
_putchar(s[a]);
}
}
_putchar('\n');
}
