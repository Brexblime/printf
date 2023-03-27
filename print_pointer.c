#include "main.h"

/**
 * print_hex_aux - prints a number in hexadecimal.
 * @n: number to be printed.
 * Return: counter.
 */
int print_hex_aux(unsigned long int n)
{
	char *hex_chars = "0123456789abcdef";
	int counter = 0;

	if (n / 16)
		counter += print_hex_aux(n / 16);
	_putchar(hex_chars[n % 16]);
	counter++;
	return (counter);
}

/**
 * print_pointer - prints an hexadecimal number.
 * @arg: arguments.
 * Return: counter.
 */
int print_pointer(va_list arg)
{
	void *p;
	char *s = "(nil)";
	unsigned long int a;
	int b;
	int i;

	p = va_arg(arg, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_hex_aux(a);
	return (b + 2);
}

