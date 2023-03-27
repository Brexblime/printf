#include "main.h"

/**
 * print_unsigned - prints an unsigned int
 * @arg: argument to print
 * Return: number of characters printed
*/

int print_unsigned(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int base = 10, num = n;
	int i = 0;
	char *str;

	if (n == 0)
		return (_putchar('0'));

	while (num > 0)
	{
		num /= base;
		i++;
	}

	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (-1);

	str[i] = '\0';
	i--;
	while (n > 0)
	{
		str[i] = (n % base) + '0';
		n /= base;
		i--;
	}

	i = write(1, str, _strlen(str));
	free(str);

	return (i);
}
