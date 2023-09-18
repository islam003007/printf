#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


int _putchar(char c);
int _printf(const char *format, ...);
int print_int(int num);
int print_binary(unsigned int num);
int print_char(char c);
int print_string(char *str);
int print_format(char c, va_list v);

#endif
