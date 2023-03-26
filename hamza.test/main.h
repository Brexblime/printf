#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct converter
{
	char *formater;
	int (*func)(va_list);

} (convert);

int indexer(const char *format, converter f_list[], va_list arg_list);

int _printf(const char *format, ...);

int put_char(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list);
int print_rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list);
int print_hex(va_list);
int print_heX(va_list);

#endif
