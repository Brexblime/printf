#include "main.h"
/**
 * print_binary - prints an integer in binary format
 * @arg: argument to print
 * Return: number of characters printed
 */
int print_binary(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	int i = 0, len = 0;
	int binary[32];

	if (n == 0)
	{
		_putchar('0');
		len++;
	}
	else
	{
		while (n > 0)
		{
			binary[i] = n % 2;
			n /= 2;
			i++;
		}
		i--;
		while (i >= 0)
		{
			_putchar(binary[i] + '0');
			len++;
			i--;
		}
	}

	return (len);
}
