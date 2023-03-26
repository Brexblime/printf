#include "main.h"
/**
 * _printf - custom ptintf function
 * @format: string with format specifier
 * Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int i = 0, j = 0, len = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL || (format[i] == '\0')
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (magic[j].formater != NULL)
			{
				if (format[i + 1] == magic[j].formater[1])
				{
					len += magic[j].fun(args);
					i += 2;
					break;
				}
				j++;
			}
			if (magic[j].formater == NULL)
			{
				_putchar('%');
				len++;
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(args);
	return (len);
}
