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
 * print_string - prints a string.
 *
 * @str: inputs char pointer.
 *
 * Return: number of printed characters.
*/

int print_string(char *str)
{
	int i;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}

	return (i);
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

	if (format == NULL)
		return (-1);

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
			case 's':
					sum += print_string((char *)va_arg(v, char *));
					break;
			case '%':
					_putchar('%');
					sum++;
					break;
			default:
					break;
			}
		}
	}

	va_end(v);
	return (sum);
}
