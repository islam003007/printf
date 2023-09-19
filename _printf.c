#include "main.h"

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
	int (*ptr)(va_list);

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

			ptr = print_format(format[i]);

			if (ptr == NULL)
				sum += print_default(format[i]);
			else
				sum += ptr(v);
		}
	}
	va_end(v);
	return (sum);
}
