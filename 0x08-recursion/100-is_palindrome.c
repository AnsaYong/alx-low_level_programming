#include <stdio.h>

/**
 * is_palindrome - a function that determines palindromity
 * @s: string to be checked for palindromicity
 * is_palindrome_helper - an assisting palindromity function
 * @s: string tto be checked for palindromity
 * @left: the index of the leftmost character being compared
 * @right: the index of the rightmost character being compared
 *
 * Return: 1 if the number is a palindrome and 0 if it is not
 */

int is_palindrome_helper(char *s, int left, int right)
{
	/* Base case: the string is a palindrome */
	if (left >= right)
	{
		return (1);
	}

	/* Recursive case: check if the leftmost and rightmost chracters are equal */
	if (s[left] != s[right])
	{
		return (0);
	}

	/* Recursive case: increment left index and decrement right */
	/* index, then call is_palindrome_helper respectively */

	return (is_palindrome_helper(s, left + 1, right - 1));
}

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}
