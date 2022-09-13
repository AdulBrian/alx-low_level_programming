#include <stdio.h>
/**
 *  * main - This is the entry point for the code.
 *  Return: zero if no error or non-zero values if error occurs.
 * */

int main(void)
{
		printf("Size of a char: %ld byte(s)\n", sizeof(char));
		printf("Size of an int: %ld byte(s)\n", sizeof(int));
		printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
		printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
		printf("Size of a float: %ld byte(s)\n", sizeof(float));
		return (0);
}
