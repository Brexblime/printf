#include "main.h"

/**
 * print_string - Prints a string
 * @arg: A va_list pointing to the string to print
 * Return: The number of characters printed
*/

int print_string(va_list arg)
{
	char *string;
	int i, len;

	string = va_arg(arg, char *);

	if (string == NULL)
	{
		string = "(null)";
		len = _strlen(string);

		for (i = 0; i < len; i++)
			_putchar(string[i]);
		return (len);
	}
	else
	{
		len = _strlen(string);

		for (i = 0; i < len; i++)
			_putchar(string[i]);

		return (len);
	}
}
