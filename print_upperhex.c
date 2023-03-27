#include "main.h"

/**
 * print_upperhex - converts and prints unsigned int to hexadecimal
 *	(lowercase letters)
 * @args: list of arguments
 *
 * Return: number of characters printed
*/

int print_upperhex(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int n = num;
	int i, j, len = 0;
	char hex[100];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		unsigned int temp = 0;

		temp = n % 16;

		if (temp < 10)
			hex[len] = temp + 48;
		else
			hex[len] = temp + 87;

		n = n / 16;
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(hex[i]);
		j++;
	}

	return (j);
}
