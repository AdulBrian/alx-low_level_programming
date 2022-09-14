#include <stdio.h>
/**
 * main -prints the lowercase alphabet in reverse, followed by a new line,
 * a new line follows
 * Return: Always 0 (if Successful)
 */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
