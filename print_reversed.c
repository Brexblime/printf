#include "main.h"

/**
 * print_reversed - prints the reversed string
 * @arg: the va_list argument containing the string
 *
 * Return: number of characters printed
*/

int print_reversed(va_list arg)
{
	char *str = va_arg(arg, char *);
	int len = 0, i;

	if (str == NULL)
		str = "(null)";

	len = _strlen(str);
	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);

	return (len);
}
