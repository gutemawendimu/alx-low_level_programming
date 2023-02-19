#include <stdio.h>
/**
 * main- Entry point
 * Return: Always 0 (Success)
  */
int main(void)
{
char x;
int y;
x = 'a';
y = 0;
while (y < 10)
{
putchar(y + '0');
y++;
}
while (x <= 'f')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
