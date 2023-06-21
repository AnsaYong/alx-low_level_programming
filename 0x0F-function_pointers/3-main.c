#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main function for entry point to the program
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: the output of the provided operation
 */
int main(int argc, char *argv[])
{
	int result;
	int (*op_ptr)(int, int); /* to store output from get_op_func */

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* get output from get_op_func */
	op_ptr = get_op_func(argv[2]);
	if (op_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 && atoi(argv[3]) == 0) ||
			(strcmp(argv[2], "%") == 0 && atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/*perform the specified operation */
	result = op_ptr(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

	return (0);
}
