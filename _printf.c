#include "main.h"
#include <stdarg.h>

/*Those for testing*/
int print_number(va_list arg)
{
	return (0);
}
int print_char(va_list arg)
{
	_putchar(1);
	return (0);
}


/**
 * 
*/
int _printf(const char *format, ...)
{
	int i = 0, j, len = 0;

	match magic[] = {
		{"%s", print_string},
		{"%d", print_number}, 
		{"%c", print_char} 
	};

	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	
Begining:
	while (format[i] != '\0')
	{
		j = 2;

		while (j >= 0)
		{
			if (magic[j].formater[0] == format[i] && magic[j].formater[1] == format[i + 1])
			{
				len += magic[j].func(args);
				i = i + 2;
				goto Begining;
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
	return (0);
}
