#include "main.h"

/**
 * print_int - print a integer
 * @n: The integer to print
 * Return: The number of digits printed
*/ 
int print_number(va_list arg)
{
	int n = va_arg(arg, int);
	int digit, num = n, count = 0;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		count++;
	}

	if (num == 0)
	{
		_putchar('0');
		count++;
	}

	while (num != 0)
	{
		digit = num % 10;
		_putchar(digit + '0');
		num /= 10;
		count++;
	}

	return (count);
}
