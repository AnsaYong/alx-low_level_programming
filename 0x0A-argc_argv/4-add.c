#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: stores the number of arguments passed
 * @argv: stores the arguments passed
 *
 * Return: 0 on success and 1 on failure
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	while (i < argc)
	{
		if (*argv[i] >= 48 && *argv[i] <= 57)
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
