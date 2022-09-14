#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 * a new line follows
 * Return: Always 0 (if Successful)
 */
int main(void)
{
int n;
char ch;
for (n = 89; n < 99; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
