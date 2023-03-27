#include "main.h"

/**
 * print_S - Prints a string and handles non printable characters
 * @arg: The argument list
 * Return: Number of characters printed
 */
int print_S(va_list arg)
{
	char *str = va_arg(arg, char *);
	int i, len = 0;
	char hex[] = "0123456789ABCDEF";

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar(hex[str[i] / 16]);
			_putchar(hex[str[i] % 16]);
			len += 4;
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
	}
	return (len);
}

