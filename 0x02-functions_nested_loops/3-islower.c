#include "main.h"
/**
 *checks for lowercase character
 * check number or an alphabet
 * Return: returns 0 if successful or 1 if otherwise
 */

int  _islower(int alpha)
{
if (alpha >= 'a' && alpha  <= 'z')
{
return (1);
}
else
{
return (0);
}
}
