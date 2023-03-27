#include "main.h"

/**
 * _printf - Function that prints any format text
 * @format: Text to be printed
 * Return: Length of the printed string
*/
int _printf(const char *format, ...)
{
		int i = 0, j, len = 0;

		match magic[] = {
			{"%s", print_string}, {"%S", print_S}, {"%c", print_char},
			{"%u", print_unsigned}, {"%%", print_percent}, {"%o", print_octal},
			{"%i", print_number}, {"%X", print_hex}, {"%d", print_decimal},
			{"%x", print_upperhex}, {"%b", print_binary}, {"%p", print_pointer},
			{"%R", print_rot13},
		};

		va_list args;

		va_start(args, format);
		if (format == NULL || (format[0] == '%' && format[1] == '\0'))
			return (-1);

Beginning:
		while (format[i] != '\0')
		{
			j = 12;
			while (j >= 0)
			{
				if (magic[j].formater[0] == format[i]
				&& magic[j].formater[1] == format[i + 1])
				{
					len += magic[j].func(args);
					i = i + 2;
					goto Beginning;
				}
				j--;
			}
			_putchar(format[i]);
			len++;
			i++;
		}
		va_end(args);
		return (len);
}
