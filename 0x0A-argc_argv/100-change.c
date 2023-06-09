#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the maximum number of coins needed to
 * make change for a given amount of money
 * @argc: stores the number of arguments passed
 * @argv: stores the arguments passed
 *
 * Return: 0 on success and 1 on failure
 */
int main(int argc, char *argv[])
{
	int amount;
	int temp = 0, count = 0, i = 0;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount < 0)
		printf("%d\n", count);

	while (i < 5)
	{
		if (amount != 0)
		{
			temp = amount / cents[i];
			amount -= temp * cents[i];
			count += temp;
		}
		i++;
	}
	printf("%d\n", count);
	return (0);
}
