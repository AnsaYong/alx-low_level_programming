#include "main.h"

/**
 * no_of_bits - counts the number of bits in a number
 * @n: number
 *
 * Return: No of bits
 */
unsigned int no_of_bits(unsigned int n)
{
	unsigned int count = 0;

	while (n)
	{
		count++;
		n >>= 1;
	}
	return (count);
}


/**
 * numb_to_bin - converts a number to its binary and stores in an array
 * @n: number to be converted
 * @bit_count: number of bits in the provided number
 * @arr: array to store binary number
 *
 * Return: nothing
 */
void numb_to_bin(int arr[], unsigned long int n, int bit_count)
{
	int j;

	if (n == 0)
	{
		arr[0] = 0;
		return;
	}
	if (n == 1)
	{
		arr[0] = 1;
		return;
	}

	j = bit_count - 1;
	while (j >= 0)
	{
		/* store the least siginificant bit from the end of the array */
		arr[j--] = n & 1;
		/* shift n to the right by 1 bit (equivalent to dividing by 2^1 */
		n >>= 1;
	}
}

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number/value
 * @index: index
 *
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int int_arr[SIZE];
	unsigned int bit_count, val_index, j, i = 0;


	bit_count = no_of_bits(n);
	if (index >= bit_count)
	{
		return (-1);
	}

	/* convert n to binary and store in an array, int_array */
	numb_to_bin(int_arr, n, bit_count);

	/* use i and j to obtain the proper (reversed) index */
	j = bit_count - 1;
	while (i < index)
	{
		j--;
		i++;
	}
	val_index = int_arr[j];

	return (val_index);
}
