#include "main.h"

/**
 * _sqrt_recursion_helper - _sqrt_recursion helper function
 * @n: number
 * @start: start of range
 * @end: end of range
 *
 * Return: square root or -1
 */
int _sqrt_recursion_helper(int n, int start, int end)
{
	int mid, sRoot;

	/* base cases */
	if (start > end)
		return (-1);

	/* calculate square root */
	mid = (start + end) / 2;
	sRoot = mid * mid;

	if (sRoot == n)
		return (mid);
	else if (sRoot > n)
		return (_sqrt_recursion_helper(n, start, mid - 1));
	else
		return (_sqrt_recursion_helper(n, mid + 1, end));
}

/**
 * _sqrt_recursion - returns square root using a recursion
 * helper function
 * @n: number
 *
 * Return: -1 or the ouput of the helper function
 */
int _sqrt_recursion(int n)
{
	/* base case */
	if (n < 0)
		return (-1);

	/* calculate square root */
	return (_sqrt_recursion_helper(n, 0, n));
}
