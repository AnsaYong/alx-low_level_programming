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
	long int longInt;
	long long int longlongInt;

	/* using sizeof to determine the size of variables */
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longInt));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongInt));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
