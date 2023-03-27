#include "main.h"

/**
 * print_octal - prints an unsigned integer in octal notation
 * @arg: argument list containing the unsigned integer to print
 * Return: the number of characters printed
*/

int print_octal(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	unsigned int num_copy = num;
	int len = 0;
	char *str;

	if (num == 0)
		return (_putchar('0'));
	while (num_copy != 0)
	{
		num_copy /= 8;
		len++;
	}
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (-1);
	len--;
	while (num != 0)
	{
		str[len] = (num % 8) + '0';
		num /= 8;
		len--;
	}
	len = 0;
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	free(str);
	return (len);
}
