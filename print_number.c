#include "main.h"
/**
 * print_number - prints integer
 * @arg: argument to print
 * Return: number of characters printed
 */
int print_number(va_list arg)
{
	int n = va_arg(arg, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
/**
 * print_decimal - prints decimal
 * @arg: argument to print
 * @flags: struct containing formatting flags
 * Return: number of characters printed
 */

int print_decimal(va_list arg, flags_t *flags)
{
	int n = va_arg(arg, int);
	int num, last = n % 10, digit;
	int i = 1, exp = 1;

	n = n / 10;
	num = n;
	if (flags->zero_padding && !flags->minus_flag)
		i += print_padding('0', flags->width - 1);

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
	num = n;
	while (exp > 0)
	{
		digit = num / exp;
		_putchar(digit + '0');
		num = num - (digit * exp);
		exp = exp / 10;
		i++;
	}
	}
	_putchar(last + '0');
	if (flags->minus_flag)
		i += print_padding(' ', flags->width - 1);
	return (i);
}
