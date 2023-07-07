#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int hex_numb;
	unsigned char *arr_of_bytes;

	/* Store a value with the least significant byte set to 1 */
	hex_numb = 0x01;
	/* Treat the value as an array of bytes */
	arr_of_bytes = (unsigned char *)&hex_numb;


    /* If the least significant byte is non-zero, it means it's stored at */
	/* the lower address (little endian) */
    /* Otherwise, if the most significant byte is non-zero, it means it's */
	/* stored at the higher address (big endian) */

	return (arr_of_bytes[0] != 0);
}
