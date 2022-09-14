#include <stdio.h>

/**
 * main - prints small caps alphabets caps,
 * A  new line follows
 * Return: Always 0 (if Success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
