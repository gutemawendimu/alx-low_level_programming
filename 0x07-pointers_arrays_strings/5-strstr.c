#include "main.h"

/**
* _strstr - locates a substring.
* @a: char array
* @b: char array (keyword)
*
* Return: array
*/
char *_strstr(char *a, char *b)
{
while (*a != '\0')
{
char *duplicate = a;
while (*a == *b && *a != '\0' && *b != '\0')
{
b++;
a++;
}
if (!*b != '\0')
{
return (duplicate);
}
a++;
}
return (0);
}

