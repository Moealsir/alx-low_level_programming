#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	printf("Size of a char: %u bytes(s)\n", sizeof(char));
	printf("Size of a int: %u bytes(s)\n", sizeof(int));
	printf("Size of a long int: %u bytes(s)\nd", sizeof(long int));
	printf("Size of a long long int: %u bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %u bytes(s)\n", sizeof(float));
	return (0);
}
