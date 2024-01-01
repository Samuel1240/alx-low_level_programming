#include <stdio.h>

/**
 * main - main function
 *
 * Return: o on success
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
