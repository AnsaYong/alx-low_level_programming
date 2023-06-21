#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments passed
 *
 * Return: 0 on success or error on failure
 */
int main(int argc, char *argv[])
{
	int i, numb_bytes;
	unsigned char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numb_bytes = atoi(argv[1]);
	if (numb_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* open the compiled executable file in binary */
	main_ptr = (unsigned char *)main;
	i = 0;
	while (i < numb_bytes)
	{
		printf("%02x", main_ptr[i]);
		printf(" ");
		i++;
	}
	printf("\n");

	return (0);
}
