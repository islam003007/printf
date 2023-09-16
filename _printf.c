#include "main.h"

/**
 * print_char - prints a character.
 *
 * @c: inputs char.
 *
 * Return: number of printed characters (always 1).
*/

int print_char(char c)
{
	_putchar(c);

	return (1);
}

/**
 * _printf - custom printf .
 *
 * @format: inputs formated string.
 *
 * Return: number of characters printed.
*/

int _printf(const char *format, ...)
{
	va_list v;
	int i;
	int sum = 0;

	va_start(v, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			sum++;
			_putchar(format[i]);
		}
		else
		{
			i++;
			switch (format[i])
			{
			case 'c':
					sum += print_char((char)va_arg(v, int));
					break;
			default:
					break;
			}
		}
	}

	va_end(v);
	return (sum);
}
