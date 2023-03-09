#include "main.h"

/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y.
 * @x: base number
 * @y: exponential number
 *
 * Return: the value of x raised tto the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	if (y % 2 == 0)
	{
		int temp = _pow_recursion(x, y / 2);

		return (temp * temp);
	}
	else
	{
		int temp = _pow_recursion(x, (y - 1) / 2);

		return (x * temp * temp);
	}
}
