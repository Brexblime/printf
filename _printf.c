#include "main.h"

/*Those for testing*/
int print_char(va_list arg)
{
	_putchar(1);
	return (0);
}
/*
*/
int _printf(const char *format, ...)
{
		int i = 0, j, len = 0;

		match magic[] = {
			{"%s", print_string},
			{"%d", print_number},
			{"%c", print_char},
			{"%i", print_number},
		};

		va_list args;

		va_start(args, format);
		if (format == NULL || (format[0] == '%' && format[1] == '\0'))
			return (-1);

Beginning:
		while (format[i] != '\0')
		{
			j = 2;
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

int main(void)
{
	_printf("Hamza is here %s\n", "Hamza");
	_printf("Hamza is here %%\n");
	_printf("%d", 15);
	_printf("%i", 23.50);
	return (0);
}
