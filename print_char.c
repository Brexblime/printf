#include "main.h"

/**
 * print_char - Prints a character to stdout
 * @arg: The argument list containing a character to print
 * Return: The number of characters printed (always 1)
*/

int print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}
