#include "main.h"

/**
 * print_int - prints an int.
 *
 * @num: inputs int.
 *
 * Return: number of printed characters.
*/

int print_int(int num)
{
	int sum = 0;
	unsigned int temp = num;

	if (num < 0)
	{
		_putchar('-');
		temp *= -1;
		sum++;
	}

	if (temp / 10)
		sum += print_int(temp / 10);

	_putchar((temp % 10) + '0');
	sum++;

	return (sum);
}

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
 * print_format - prints based of format specifier
 *
 * @c: inputs format specefier.
 * @v: inputs va_list
 *
 * Return: number of printed characters.
*/

int print_format(char c, va_list v)
{
	int sum = 0;

	switch (c)
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
			case 'i':
			case 'd':
					sum += print_int((int)va_arg(v, int));
					break;
			default:
					_putchar('%');
					_putchar(c);
					sum += 2;
					break;
			}

	return (sum);
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
			if (!format[i])
				return (-1);
			sum += print_format(format[i], v);
		}
	}

	va_end(v);
	return (sum);
}
