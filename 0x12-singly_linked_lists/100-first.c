#include "lists.h"

/**
 * before_main - attribute which specifies that the function should
 * run before main()
 *
 * Return: Nothing.
 */
void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
