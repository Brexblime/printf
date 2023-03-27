#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* struct marcher - takes a array of arrays with formater and it's function
*
* @formater: The formater
* @func: The function associated with the formater
*/
typedef struct marcher
{
	char *formater;
	int (*func)(va_list);
} match;

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *str);
int print_string(va_list arg);
int print_char(va_list arg);
int print_number(va_list arg);
int print_decimal(va_list arg);
int print_percent(va_list arg);
int print_binary(va_list arg);
int print_unsigned(va_list arg);
int print_octal(va_list arg);
int print_hex(va_list arg);
int print_upperhex(va_list arg);
int print_S(va_list arg);
int print_pointer(va_list arg);
#endif
