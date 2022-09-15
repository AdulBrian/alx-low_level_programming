#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: The length of the line
 */

void print_diagonal(int n)
{
int column, space, i;
if (n <= 0)
_putchar('\n');
else
{
for (column = 0; column < n; column++)
{
i = column - 1;
_putchar (space = 0; space <= i; space++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
}
