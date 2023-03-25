#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf_helper - help _printf to print
 * @format: format
 * @count: counter
 * @c: characters
 * @args: arguments
 * Return: Nothing
*/
void _printf_helper(const char *format, int count, char c, va_list args)
{
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(args, int);
				write(1, &c, 1);
				count++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char*);
			while (*s != '\0')
			{
				write(1, s, 1);
				s++;
				count++;
			}
			}
			else if (*format == '%')
			{
				write(1, "%", 1);
				count++;
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}

}

/**
 * _printf -  that produces output according to a format
 * @format: formater
 * Return: The number of characters printed
 *	(excluding the null byte used to end output to strings)
*/
int _printf(const char *format, ...)
{
	int count = 0;
	char c;
	va_list args;


	va_start(args, format);
	_printf_helper(format, count, c, args);
	va_end(args);
	return (count);
}
