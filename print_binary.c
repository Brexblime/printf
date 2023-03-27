#include "main.h"
/**
 * print_binary - prints an integer in binary format
 * @arg: argument to print
 * Return: number of characters printed
 */
int print_binary(va_list arg)
{
	int i;
	int flag = 0, count = 0;
	unsigned int num = va_arg(arg, unsigned int);
	unsigned int mask;

	for (i = 31; i >= 0; i--)
	{
		mask = 1 << i;
		if (num & mask)
			flag = 1;
		if (flag)
		{
			_putchar((num & mask) ? '1' : '0');
			count++;
		}
	}
	if (count == 0)
	{
		_putchar('0');
		count++;
	}
	return (count);
}

