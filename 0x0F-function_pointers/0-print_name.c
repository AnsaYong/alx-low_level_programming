/**
 * print_name - prints a persons name by calling a
 * helper function using function pointers
 * @name: the persons name
 * @f: pointer to a void function that takes a char pointer
 * as parameter
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
