#include "main.h"

/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 *
 *
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
