#include <stdio.h>

/**
 * main: displays the size of specified variables
 *
 * Returns: 0
 *
 */
int main(void)
{
	/* declaring variables */
	char charType;
	double doubleType;
	int intType;
	float floatType;

	/* using sizeof to determine the size of variables */
	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	return (0);
}
