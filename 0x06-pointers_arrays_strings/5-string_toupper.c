#include "main.h"

/**
 * string_toupper - converts lowercases to upper cases
 * @str: string array to be converted
 *
 * Return: the converted uppercase characters
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	return (str);
}

