#include <stdio.h>

/**
 * print aplhabets in lowe case and uper case,
 * a new line follows
 * Return: Always 0 (if Successful)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
