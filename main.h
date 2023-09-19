#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print - type for print type.
 *
 * @c: inputs char.
 * @print_function: inputs print function.
*/

typedef struct print
{
	char c;
	int (*print_function)(va_list);
} print_t;


int _putchar(char c);
int _printf(const char *format, ...);
int (*print_format(char c))(va_list);
int print_int(va_list v);
int handle_int(int num);
int print_binary(va_list v);
int print_char(va_list v);
int print_string(va_list v);
int print_STRING(va_list v);
int print_unsigned_int(va_list v);
int handle_unsigned_int(unsigned int num);
int print_octal(va_list v);
int print_hex(va_list v);
int print_HEX(va_list v);
int print_percent(va_list v);
int print_reversed(va_list v);
int print_rot(va_list v);
int handle_hex_long(unsigned long int num);
int print_pointer(va_list v);
int print_default(char c);

#endif
