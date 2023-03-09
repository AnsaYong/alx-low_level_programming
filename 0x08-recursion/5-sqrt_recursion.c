#include "main.h"

/**
 * sqrt_helper - a function which accepts input from
 * _sqrt_recursion function and uses recursive binary search approach
 * to calculate the square root of in input parameter
 * @x: the input number
 * @left: the left bound of the search range
 * @right: the right bound of the search range
 *
 * _sqrt_recursion - function returns natural square root of a number.
 * @n: the number whose square root is to be calculated
 *
 * Return: the square root of the integer or negative -1 if no square root
 */

int sqrt_helper(int x, int left, int right)
{
	int mid = left + (right - left) / 2;
	int square = mid * mid;
	int result = sqrt_helper(x, mid + 1, right);

	if (left > right)
	{
		return (-1);  /* Return -1 if no integer square root exists */
	}
	
	if (square == x)
	{
		return (mid);
	}
	else if (square > x)
	{
		return (sqrt_helper(x, left, mid - 1));
	}
	else
	{
		if (result == -1)
		{
			return (-1); /* Return -1 if no integer square root exists */
		}
		else
		{
			return (result);
		}
	}
}


int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (sqrt_helper(n, 1, n));
}
