#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf -  that produces output according to a format
 * Return: The number of characters printed
 *	(excluding the null byte used to end output to strings)
*/
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);
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
	va_end(args);
	return (count);
}
